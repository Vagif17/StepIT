using PcBuilder.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PcBuilder.Classes;

internal class ComputerBuilder : IComputerBuilder
{
    Computer PC = new Computer();
    public ComputerBuilder()
    {
        
    }

    public void SetCPU(string CPU)
    {
        PC.CPU = CPU;
    }
    public void SetCuller(string Culler)
    {
        PC.Culler = Culler;
    }

    public void SetGPU(string GPU)
    {
        PC.GPU = GPU;
    }

    public void SetHardDisk(string HardDisk)
    {
        PC.HardDisk = HardDisk;
    }

    public void SetRAM(string RAM)
    {
        PC.RAM = RAM;
    }

    public Computer GetResult()
    {
        return PC;
    }
}
