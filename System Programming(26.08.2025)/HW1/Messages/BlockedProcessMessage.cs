using System.Collections.ObjectModel;
using System.Diagnostics;

namespace HW1.Messages;

public class BlockedProcessMessage
{
    public ObservableCollection<Process> BlockedProcesses { get; set; }
    public ObservableCollection<Process> ProcessesNotToStart { get; set; } //Кастыль?

}