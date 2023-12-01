using CarFabric.Classes.Cars;
using CarFabric.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarFabric.Classes.CarFactories;

internal class TruckFactory : IFactory
{

    public TruckFactory()
    {
        
    }
    public ICar CreateCar(ICar car)
    {

        var Truck = car as Truck;

        Truck.Wheels = 6;
        Truck.TrailerLoadCapacity = 200;
        Truck.HP = 1500;
        Truck.MaxSpeed = 100;
        Truck.Model = "Mack Anthem";

        return Truck;
    }
}
