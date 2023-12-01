using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PcBuilder.Classes;

internal class Director
{
    public Director()
    {
        
    }


    public void DesignerPcSet(ComputerBuilder builder)
    {
        builder.SetCuller("Pure Rock 2");
        builder.SetCPU("AMD Ryzen 9 3950X");
        builder.SetRAM("G.Skill TridentZ Royal.");
        builder.SetGPU("NVIDIA Quadro RTX 4000");
        builder.SetHardDisk("ADATA SE800");
    }

    public void GamerPcSet(ComputerBuilder builder) 
    {
        builder.SetCuller("Deepcool AS500 Plus");
        builder.SetCPU("AMD Ryzen 7 7800X3D");
        builder.SetRAM("Corsair Vengeance LPX");
        builder.SetGPU("GeForce RTX 4090");
        builder.SetHardDisk("WD Black 1TB NVMe ");
    }

    public void OfficeSPcSet(ComputerBuilder builder)
    {
        builder.SetCuller("Noctua NH-D15");
        builder.SetCPU("AMD Ryzen 5 5600G");
        builder.SetRAM("Corsair Dominator Platinum");
        builder.SetGPU("PNY NVidia RTX A6000");
        builder.SetHardDisk("Seagate. SkyHawk AI 20TB HDD");
    }

}
