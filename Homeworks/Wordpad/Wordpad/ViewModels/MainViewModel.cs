using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Messaging;
using GalaSoft.MvvmLight.Views;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Wordpad.Messsages;

namespace Wordpad.ModelViews;

class MainViewModel : ViewModelBase
{

    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    private ViewModelBase currentView;

    public ViewModelBase CurrentView
    {
        get => currentView;
        set => Set(ref currentView, value);
    }

    public MainViewModel(INavigationService navigationService, IMessenger messenger)
    {
        CurrentView = App.Container.GetInstance<TextEnterViewModel>();

        _navigationService = navigationService;
        _messenger = messenger;

        _messenger.Register<NavigationMessage>(this, message =>
        {
            CurrentView = message.ViewModelType;
        });
    }

}
