using GalaSoft.MvvmLight.Messaging;
using GalaSoft.MvvmLight.Views;
using SimpleInjector;
using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Navigation;
using Wordpad.ModelViews;
using Wordpad.Services.Classes;
using NavigationService = Wordpad.Services.Classes.NavigationService;

namespace Wordpad;

/// <summary>
/// Interaction logic for App.xaml
/// </summary>
public partial class App : Application
{

    public static Container Container {get; set;}

    void register()
    {
        Container = new();

        Container.RegisterSingleton<IMessenger, Messenger>();
        Container.RegisterSingleton<INavigationService, NavigationService>();


        Container.RegisterSingleton<MainViewModel>();
        Container.RegisterSingleton<TextEnterViewModel>();


        Container.Verify();
    }

    protected override void OnStartup(StartupEventArgs e)
    {
        register();

        var window = new MainWindow();
        window.DataContext = Container.GetInstance<MainViewModel>();

        window.ShowDialog();
    }

}
