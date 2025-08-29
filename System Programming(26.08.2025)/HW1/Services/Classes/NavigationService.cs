
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Messaging;
using HW1.Messages;
using HW1.Services.Interfaces;

namespace HW1.Services.Classes;

public class NavigationService : INavigationService
{
    private readonly IMessenger _messenger;


    public NavigationService(IMessenger messenger)
    {
        _messenger = messenger;
    }

    public void NavigateTo<T>() where T : ViewModelBase
    {
        _messenger.Send(new NavigationMessage()
        {
            ViewModelType = App.Container.GetInstance<T>()
        });
    }
    
   
}