using CarFabric.Classes.Cars;
using CarFabric.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarFactory.Classes.CarFactories;

internal class SedanFactory : IFactory
{
    public SedanFactory()
    {
            
    }

    public ICar CreateCar(ICar car)
    {
        var sedan = car as Sedan;

        sedan.Wheels = 4;
        sedan.Model = "EQE Sedan";
        sedan.MaxSpeed = 210;
        sedan.HP = 675;

        return sedan;
    }
}
