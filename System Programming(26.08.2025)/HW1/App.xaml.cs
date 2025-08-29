using System.Configuration;
using System.Data;
using System.Windows;
using GalaSoft.MvvmLight.Messaging;
using GalaSoft.MvvmLight.Views;
using HW1.Services.Classes;
using HW1.ViewModels;
using INavigationService = HW1.Services.Interfaces.INavigationService;

namespace HW1;

/// <summary>
/// Interaction logic for App.xaml
/// </summary>
public partial class App : Application
{
    public static SimpleInjector.Container Container { get; set; }

    void Register() 
    {
        Container = new();
        
        Container.RegisterSingleton<INavigationService,NavigationService>();
        Container.RegisterSingleton<IMessenger,Messenger>();
        
        
        
        Container.RegisterSingleton<MainWindowViewModel>();
        Container.RegisterSingleton<TaskManagerPanelViewModel>();
        Container.RegisterSingleton<ProcessesViewModel>();
        Container.RegisterSingleton<BlackListViewModel>();
    }
    
    
    protected override void OnStartup(StartupEventArgs e)
    {
        Register(); 

        var window = new MainWindowView();
        window.DataContext = Container.GetInstance<MainWindowViewModel>();

        window.ShowDialog();
    }
    
}