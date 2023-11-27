using PcBuilder.Classes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PcBuilder.Interfaces;

interface IComputerBuilder
{
    public void SetHardDisk(string HardDisk);
    public void SetCPU(string CPU);
    public void SetGPU(string GPU);
    public void SetRAM(string RAM);
    public void SetCuller(string Culler);
    public Computer GetResult();


}
