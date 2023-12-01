using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PcBuilder.Classes;

internal class Computer
{
    public string CPU { get; set; }
    public string GPU { get; set; }
    public string RAM { get; set; }
    public string Culler { get; set; }
    public string HardDisk { get; set; }


    public Computer()
    {
        
    }

    

    public override string ToString()
    {
        return $"CPU : {CPU} \nGPU : {GPU} \nRAM : {RAM} \nCuller {Culler} \nHard Disk : {HardDisk}";
    }
}
