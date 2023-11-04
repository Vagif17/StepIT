using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using LiveCharts;
using LiveCharts.Wpf;
using Monefy.Messages;
using Monefy.Models;
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
    

    public PieChart Chart { get => chart; set => Set(ref chart); }

    public BudgetViewModel(INavigationService navigationService, IMessenger messenger)
    {
        _navigationService = navigationService;
        _messenger = messenger;
        _messenger.Register<DataMessage>(this, message =>
        {
            try
            {
                Chart.Series.Add(
                    new PieSeries
                    {
                    
                        Values = new ChartValues<Double> { (int)message.Data[1] },
                        DataLabels = true,
                        Fill = new SolidColorBrush(Colors.Fuchsia)
                       

                    }
                );
            }
            catch
            {
            }
        });
        Chart.InnerRadius = 35;
        Chart.Series.Add(
            new PieSeries
            {
                Values = new ChartValues<Double> { 100 },
                DataLabels = true,
                Fill = new SolidColorBrush(Colors.Green)

            }
            );

        Chart.Series.Add(
              new PieSeries
              {
                  Values = new ChartValues<Double> { 20 },
                  DataLabels = true,
                  Fill = new SolidColorBrush(Colors.Red)

              }
            );
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
}