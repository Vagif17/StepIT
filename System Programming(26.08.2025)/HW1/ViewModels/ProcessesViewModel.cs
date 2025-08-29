using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Windows;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using HW1.Messages;

namespace HW1.ViewModels;

public class ProcessesViewModel : ViewModelBase
{
    private readonly IMessenger Messenger;
    
    public ObservableCollection<Process> Processes { get; set; }
    public ObservableCollection<Process> BlockedProcesses { get; set; } = new ObservableCollection<Process>();
    public Process? SelectedProcess { get; set; }
    public string? SearchedProcess { get; set; }

    public ProcessesViewModel(IMessenger messenger)
    {
        Processes =  new ObservableCollection<Process>( System.Diagnostics.Process.GetProcesses().ToList());
        Messenger = messenger;
        
        Messenger.Register<BlockedProcessMessage>(this, message =>
        {
            if (message.ProcessesNotToStart != null)
            {
                BlockedProcesses.Clear();
                foreach (var process in message.ProcessesNotToStart)
                {
                    BlockedProcesses.Add(process);
                }
            }
        });

        Thread thread = new(() =>
        {
            while (true)
            {
                foreach (var process in Process.GetProcesses())
                {
                    foreach (var blockedProcess in BlockedProcesses)
                    {
                        if (process.ProcessName == blockedProcess.ProcessName)
                        {
                            Thread.Sleep(5000); 
                            Processes.Remove(process);
                            process.Kill();
                            MessageBox.Show("This App is Blocked");
                        }
                    }
                }
            }
        });
        
        thread.Start();

    }


    public RelayCommand KillCommand
    {
        get => new(() =>
        {
            if (SelectedProcess != null)
            {
                SelectedProcess.Kill();
                Processes.Remove(SelectedProcess);
                MessageBox.Show("Process Killed!");
            }
            else
            {
                MessageBox.Show("Choose Process");
            }
        });
    }

    public RelayCommand SearchCommand
    {
        
        get => new(() =>
        {
            if (SearchedProcess != null)
            {
                Processes.Clear();
                foreach (var process in Process.GetProcesses())
                {
                    if (process.ProcessName.ToLower() == SearchedProcess.ToLower()){Processes.Add(process);}
                }
            }
       
        });
    }

    public RelayCommand StartCommand
    {
        get => new(() =>
        {
            Process.Start("\"explorer.exe\", \"shell:::{2559a1f3-21d7-11d4-bdaf-00c04f60b9f0}\"");
        });
    }

    public RelayCommand ResetCommand
    {
        get => new(() =>
        {
            Processes.Clear();
            foreach (var process in Process.GetProcesses())
            {
                Processes.Add(process);
            }
        });
    }

    public RelayCommand BlockCommand
    {
        get => new(() =>
        {
            if (SelectedProcess != null)
            {
                
                BlockedProcesses.Add(SelectedProcess);
                Messenger.Send(new BlockedProcessMessage() {BlockedProcesses = BlockedProcesses});
                SelectedProcess.Kill();
                Processes.Remove(SelectedProcess);
                
            }
            else
            {
                MessageBox.Show("Choose Process");
            }
        });
    }
}