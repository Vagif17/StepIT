using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Windows;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using HW1.Services.Interfaces;

namespace HW1.ViewModels;

public class TaskManagerPanelViewModel : ViewModelBase, INotifyPropertyChanged
{
    public TaskManagerPanelViewModel()
    {
        
    }
    
    private ViewModelBase currentView;

    public ViewModelBase CurrentView
    {

        get => currentView;
        set
        {
            currentView = value;
            OnPropertyChanged();
        }
        
    }
    // AI Helped
    public event PropertyChangedEventHandler PropertyChanged;

    protected void OnPropertyChanged([CallerMemberName] string name = null) =>
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
    
    

    public RelayCommand CloseAppCommand
    {
        get => new(() =>
        {
            Application.Current.MainWindow.Close();
        });
    }

    public RelayCommand ProcessesComand
    {
        get => new(() =>
        {
            CurrentView = App.Container.GetInstance<ProcessesViewModel>();
        });
    }

    public RelayCommand BlackListCommand
    {
        get => new(() =>
        {
            CurrentView = App.Container.GetInstance<BlackListViewModel>();
        });
    }


}