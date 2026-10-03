from django import forms

class EventForm(forms.Form):
    CATEGORY_CHOICES = [
        ('education', 'Education'),
        ('technology', 'Technology'),
        ('sport', "Sport"),
        ('entertainment', 'Entertainment'),
        ('other', 'Other'),
    ]


    title = forms.CharField(
        label = 'Title',
        required = True,
        min_length=3,
        widget=forms.TextInput(attrs={'placeholder':'Title:'})
    )

    description = forms.CharField(
        label = 'Description',
        required = True,
        min_length=20,
        widget=forms.Textarea(attrs={'placeholder': 'Enter your content', 'rows': '6'}, )
    )

    category = forms.ChoiceField(
        label = 'Category',
        choices = CATEGORY_CHOICES,
    )

    venue = forms.CharField(
        label = 'Venue',
        required = True,
        min_length=3,
        widget=forms.TextInput(attrs={'placeholder':'Venue:'})
    )


