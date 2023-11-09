using BookCenter.Messages;
using BookCenter.Models;
using BookCenter.Services.Classes;
using BookCenter.Services.Interfaces;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Messaging;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;

namespace BookCenter.ViewModels;

class OrderViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    private readonly IDataService _dataService;

    public string Cardnumber { get; set; }
    public string Fullname { get; set ; }
    public string Cvv { get; set; }
    public string Date { get; set; }



    Regex regexcardnumber = new Regex("(([0-9]){4}()){1}");
    Regex regexFullName = new Regex("([a-zA-Z]){3,22}");

    Regex regexcvv = new Regex("(([0-9]){3}){1}");
    Regex regexdate = new Regex("(([0-9]{2}\\/[0-9]{2})){1}"); 


Random r = new Random();

    public Int32 Price { get; set; }
    public Result SelectedBook { get; set; }


    public OrderViewModel(INavigationService navigationService, IMessenger messenger, IDataService dataService)
    {
        _navigationService = navigationService;
        _messenger = messenger;
        _dataService = dataService;

        _messenger.Register<DataMessage>(this, message =>
        {
            if (message.Data != null)
            {
                SelectedBook = message.Data as Result;
            }
        });

        Price = r.Next(10, 40);

    }



    public MyRelayCommand orderBtn
    {
        get => new(
            () =>
            {
                MessageBox.Show("Succes");

            },
            () =>
            {
                if (Cardnumber != null && Fullname != null && Cvv != null & Date != null)
                {
                    if (regexcardnumber.IsMatch(Cardnumber) && regexcvv.IsMatch(Cvv) && regexFullName.IsMatch(Fullname) && regexdate.IsMatch(Date) ) 
                    { return true; }
                }
                return false;
            }
            );



    }


}
