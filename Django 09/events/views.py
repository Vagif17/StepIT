from django.shortcuts import render, redirect
from . import data
from .forms import EventForm


def event_list(request):
    events = data.get_events()

    query = request.GET.get('q', '').strip()
    category = request.GET.get('category', '')
    status = request.GET.get('status', '')

    if query:
        events = [
            event for event in events
            if query.lower() in event['title'].lower()
            or query.lower() in event['venue'].lower()
        ]

    if category:
        events = [
            event for event in events
            if event['category'].lower() == category.lower()
        ]

    if status:
        events = [
            event for event in events
            if event['status'] == status
        ]


    all_events = data.get_events()

    total_count = len(all_events)
    active_count = sum(
        1 for event in all_events
        if event['status'] == data.STATUS_ACTIVE
    )
    closed_count = sum(
        1 for event in all_events
        if event['status'] == data.STATUS_CLOSED
    )

    context = {
        'events': events,
        'total_count': total_count,
        'active_count': active_count,
        'closed_count': closed_count,

        'query': query,
        'selected_category': category,
        'selected_status': status,
    }

    return render(request, 'events/event_list.html', context)

def event_detail(request, pk):
    event = data.get_event_by_id(pk)
    if event is None:
        return redirect('events:not_found')
    return render(request, 'events/event_detail.html', {'event': event})

def event_create(request):
    if request.method == 'POST':
        form = EventForm(request.POST)
        if form.is_valid():
            data.add_event(
                title=form.cleaned_data['title'],
                description=form.cleaned_data['description'],
                category=form.cleaned_data['category'],
                venue=form.cleaned_data['venue'],
            )
            return redirect('events:list')
    else:
        form = EventForm()

    return render(request, 'events/event_form.html', {'form': form})

def event_confirm_delete(request, pk):
    event = data.get_event_by_id(pk)
    if event is None:
        return redirect('events:not_found')

    if request.method == 'POST':
        data.delete_event(pk)
        return redirect('events:list')

    return render(request, 'events/event_confirm_delete.html', {'event': event})

def event_not_found(request):
    return render(request, 'events/event_not_found.html')

def event_close(request, pk):
    event = data.get_events()
    if event is None:
        return redirect("events:not_found")

    if request.method == 'POST':
        data.close_event(pk)
        return redirect("events:detail",pk=pk)

    return redirect('events:detail', pk=pk)
