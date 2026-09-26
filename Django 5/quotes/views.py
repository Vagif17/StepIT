import random

from django.http import HttpResponse


def random_quote(request):
    quotes = [
        "The only way to do great work is to love what you do.",
        "It always seems impossible until it's done.",
        "The future depends on what you do today.",
        "Success is the sum of small efforts, repeated day in and day out."
    ]

    quote = random.choice(quotes)

    return HttpResponse(quote)