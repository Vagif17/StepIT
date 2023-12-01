﻿using CarFabric.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarFabric.Classes.Cars;

internal class Sedan : ICar
{
    public string Model { get; set; }
    public int Wheels { get; set; }
    public int HP { get; set; }
    public int MaxSpeed { get; set; }

    public Sedan()
    {
        
    }


    public string GetInfo()
    {
        return $"Sedan\nModel : {Model}\nWheels : {Wheels} \nHP : {HP}\nMaxSpeed : {MaxSpeed}";
    }
}
