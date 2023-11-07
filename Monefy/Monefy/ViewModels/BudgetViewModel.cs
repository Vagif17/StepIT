using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using LiveCharts;
using LiveCharts.Wpf;
using Monefy.Messages;
using Monefy.Models;
using Monefy.Services.Classes;
using Monefy.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media;

namespace Monefy.ViewModels;

class BudgetViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;

    private PieChart chart = new();
    public Int32 Income { get; set; } // Спросить почему не отображается

    public PieChart Chart { get => chart; set => Set(ref chart); }
    
    public BudgetViewModel(INavigationService navigationService, IMessenger messenger)
    {


        _navigationService = navigationService;
        _messenger = messenger;
        _messenger.Register<DataMessage>(this, message =>
        {
            try
            {
                if (message.Data[0].ToString() != "Income")
                {
                    SolidColorBrush pieColor = ColorSetService.SetColor(message);

                    Chart.Series.Add(
                        new PieSeries
                        {

                            Values = new ChartValues<Double> { (int)message.Data[1] },
                            DataLabels = true,
                            Fill = pieColor


                        }
                    ); ;
                }
                else
                {
                    Income += (Int32)message.Data[1] ;
                }
            }
            catch
            {
            }
        });
        Chart.InnerRadius = 40;
         
       
    }

    public RelayCommand<object> addexpensesBtn
    {
        get => new(
            param =>
            {

                object[] send = { param as string };
                _navigationService.NavigateTo<BudgetEnterViewModel>(send);

            });
    }

    public RelayCommand<object> addincomeBtn
    {
        get => new(
            param =>
            {

                object[] send = { param as string };
                _navigationService.NavigateTo<BudgetEnterViewModel>(send);

            });
    }

}