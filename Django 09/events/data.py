from copy import deepcopy


CATEGORIES = ['Education', 'Technology', 'Sport', 'Entertainment', 'Other']

STATUS_ACTIVE = 'active'
STATUS_CLOSED = 'closed'


EVENTS = [
    {
        'id': 1,
        'title': 'Открытие IT-конференции',
        'description': 'Ежегодная конференция для студентов и преподавателей.',
        'category': 'Technology',
        'venue': 'Главный корпус, ауд. 305',
        'status': STATUS_ACTIVE,
    },
    {
        'id': 2,
        'title': 'Турнир по мини-футболу',
        'description': 'Товарищеский турнир между командами разных курсов.',
        'category': 'Sport',
        'venue': 'Спортивный зал №2',
        'status': STATUS_ACTIVE,
    },
    {
        'id': 3,
        'title': 'Лекция по истории искусств',
        'description': 'Открытая лекция о живописи эпохи Возрождения.',
        'category': 'Education',
        'venue': 'Библиотека, читальный зал',
        'status': STATUS_CLOSED,
    },
]

_next_id = max(e['id'] for e in EVENTS) + 1

def get_events():
    return deepcopy(EVENTS)


def get_event_by_id(event_id):
    for event in EVENTS:
        if event['id'] == event_id:
            return event
    return None


def add_event(title, description, category, venue):
    global _next_id
    new_event = {
        'id': _next_id,
        'title': title,
        'description': description,
        'category': category,
        'venue': venue,
        'status': STATUS_ACTIVE,
    }
    EVENTS.append(new_event)
    _next_id += 1
    return new_event

def delete_event(event_id):
    event = get_event_by_id(event_id)
    if event:
        EVENTS.remove(event)
    return event

def close_event(event_id):
    event = get_event_by_id(event_id)
    if event and event['status'] == STATUS_ACTIVE:
        event['status'] = STATUS_CLOSED
    return event