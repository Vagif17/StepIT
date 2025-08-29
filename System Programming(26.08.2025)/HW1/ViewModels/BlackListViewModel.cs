using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Windows;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using HW1.Messages;

namespace HW1.ViewModels;

public class BlackListViewModel : ViewModelBase
{
    private readonly IMessenger Messenger;

    public Process? SelectedProcess { get; set; }
    public string? SearchedProcess { get; set; }


    public ObservableCollection<Process> BlockedProcesses { get; set; } = new ObservableCollection<Process>();

    public BlackListViewModel(IMessenger messenger)
    {
        Messenger = messenger;
        
        Messenger.Register<BlockedProcessMessage>(this, message =>
        {
            if (message.BlockedProcesses != null)
            {
                BlockedProcesses.Clear();
                foreach (var processes in message.BlockedProcesses)
                {
                    BlockedProcesses.Add(processes);
                }
            }
        });
    }

    public RelayCommand UnblockCommand
    {
        get => new(() =>
        {
            if (SelectedProcess != null)
            {
                BlockedProcesses.Remove(SelectedProcess);
                Messenger.Send<BlockedProcessMessage>(new BlockedProcessMessage() {ProcessesNotToStart = BlockedProcesses});
            }
            else
            {
                MessageBox.Show("Choose Process");
            }
        });
    }
    
}