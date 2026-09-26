from datetime import datetime
from django.http import HttpResponse


def current_day(request):
    day = datetime.now().strftime("%A")

    return HttpResponse(day)