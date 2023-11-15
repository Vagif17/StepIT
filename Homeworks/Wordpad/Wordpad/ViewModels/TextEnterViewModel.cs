using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Wordpad.Messsages;
using Wordpad.Services.Classes;
using static System.Net.Mime.MediaTypeNames;

namespace Wordpad.ModelViews;

class TextEnterViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;


    public string Text { get; set; }

    public TextEnterViewModel(INavigationService navigationService, IMessenger messenger)
    {

        _navigationService = navigationService;
        _messenger = messenger;

    
    }

    public RelayCommand SaveInFile
    {

        get => new
            (
                () =>
                {
                    SaveInFileService.SaveInFile(Text);
                }
            );
    }

    public RelayCommand ClearText
    {

        get => new
            (
                 () => 
                 {
                     Text = "";     
                 }
            );
    }

}
