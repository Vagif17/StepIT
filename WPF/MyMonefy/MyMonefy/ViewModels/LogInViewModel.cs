using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using MyMonefy.Messages;
using MyMonefy.Models;
using MyMonefy.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace MyMonefy.ViewModels;

class LogInViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    private readonly IUserService _userService;
    public string Name { get; set; }
    public string Password { get; set; }

    public List<Account> Accounts { get; set; }
    public LogInViewModel(INavigationService navigationService, IMessenger messenger, IUserService userService)
    {
        _navigationService = navigationService;
        _messenger = messenger;
        _userService = userService;
    }


    public RelayCommand loginCommand
    {
        get => new(
            () =>
            { 
              if (  _userService.Login(Name, Password))
                _navigationService.NavigateTo<BudgetViewModel>();
                else
                {
                    MessageBox.Show("Incorect password or name");
                }
            });
    }

    public RelayCommand gobackCommand
    {
        get => new(
        () =>
        {
            _navigationService.NavigateTo<ChoiceViewModel>();
        }
        );
    }
}
