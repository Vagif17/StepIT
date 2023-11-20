using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using LiveCharts.Wpf;
using LiveCharts;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyMonefy.Services.Interfaces;
using System.Windows;
using MyMonefy.Models;
using System.IO;

namespace MyMonefy.ViewModels;


class RegistrationViewModel : ViewModelBase
{

    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    private readonly IUserService _userService;
    public Account Account { get; set; } = new Account();
    

    public RegistrationViewModel(INavigationService navigationService, IMessenger messenger,IUserService userService)
    {
        _navigationService = navigationService;
        _messenger = messenger;
        _userService = userService;
    }


    public RelayCommand submitBtn
    {
        get => new(
            () =>
            {
                _userService.Register(Account); // ПОКА МОЖНО ЗАРЕГИСТРИРОВАТЬ ТОЛЬКО 1 АКАУНТ,ЕСТЬ ПИРОБЛЕМЫ НО НЕТ ВРЕМЕНИ
                _navigationService.NavigateTo<ChoiceViewModel>();
            },
            () =>
            {
           
                //if (Account.Name != null && Account.Surname != null && Account.Email != null && Account.Password != null)
                //{
                //    return _registrationService.checkAll(Account.Name, Account.Surname, Account.Email); НЕ РАБОТАЕТ
                //}
                return true  ;

            }
            );
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
