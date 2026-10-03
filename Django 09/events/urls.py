from django.urls import path
from . import views

app_name = 'events'
urlpatterns = \
    [path('', views.event_list, name='list'),
     path('create/', views.event_create, name='create'),
     path('not-found/', views.event_not_found, name='not_found'),
     path('<int:pk>/', views.event_detail, name='detail'),
     path('<int:pk>/delete/', views.event_confirm_delete, name='delete'),
     path('<int:pk>/close/', views.event_close, name='close'),
     ]
