using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Messaging;
using HW1.Messages;
using HW1.Services.Interfaces;

namespace HW1.ViewModels;

public class MainWindowViewModel : ViewModelBase
{
    private readonly INavigationService NavigationService;
    private readonly IMessenger Messenger;
    
    private ViewModelBase currentView;
    
    public ViewModelBase CurrentView
    {
        
        get => currentView;
        set => Set(ref currentView, value); // Не совсем понял
        
    }
    
    
    public MainWindowViewModel(INavigationService navigationService, IMessenger messenger)
    {
        
        CurrentView = App.Container.GetInstance<TaskManagerPanelViewModel>();
        NavigationService = navigationService;
        Messenger = messenger;

        Messenger.Register<NavigationMessage>(this, message =>
        {
            CurrentView = message.ViewModelType;
        });
    }
    
}