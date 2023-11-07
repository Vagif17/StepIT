using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using GalaSoft.MvvmLight.Views;
using Monefy.Messages;
using Monefy.Services;
using Monefy.Services.Classes;
using Monefy.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.DirectoryServices;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using INavigationService = Monefy.Services.Interfaces.INavigationService;

namespace Monefy.ViewModels;

class BudgetEnterViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    public string Category { get; set; }
    public string ExpenseValue { get; set; }

    public BudgetEnterViewModel(INavigationService navigationService, IMessenger messenger)
    {
        _navigationService = navigationService;
        _messenger = messenger;
        _messenger.Register<DataMessage>(this, message =>
        {
            try {
                object check = message.Data[1];
            }
            catch
            {
                Category = message.Data[0] as string;
            }
        });
    }


    public RelayCommand goback
    {
        
        get => new(
            () =>
            {
                _navigationService.NavigateTo<BudgetViewModel>();
            });
    }
    public MyRelayCommand addcommand
    {
        get => new(
            () =>
            {
                object[] send = { Category, Convert.ToInt32(ExpenseValue) };
                _navigationService.NavigateTo<BudgetViewModel>(send);
                ExpenseValue = "";

            },

            () =>
            {
                if (!String.IsNullOrEmpty(ExpenseValue)) 
                {
                    for (int i = 0; i < ExpenseValue.Length; i++)
                    {
                        if (ExpenseValue[i] < 48 || ExpenseValue[i] > 57)
                        {
                            return false;
                        }
                    }
                    return true;
                }
                return false;
            }
            );                                                    
       

    }
    
}