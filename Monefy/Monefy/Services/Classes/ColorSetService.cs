using Monefy.Messages;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media;

namespace Monefy.Services.Classes;

internal static class ColorSetService
{
    static SolidColorBrush pieColor = new(Colors.Black);

    internal static SolidColorBrush SetColor(DataMessage message) 
    {
        if (message != null)
        {
            switch (message.Data[0])
            {
                case "Home":
                    pieColor = new(Colors.Fuchsia);
                    break;

                case "Sport":
                    pieColor = new(Colors.BurlyWood);
                    break;

                case "Health":
                    pieColor = new(Colors.Red);
                    break;

                case "Car":
                    pieColor = new(Colors.Cyan);
                    break;

                case "Gift":
                    pieColor = new(Colors.YellowGreen);
                    break;

                case "Food":
                    pieColor = new(Colors.SpringGreen);
                    break;

                case "Pet":
                    pieColor = new(Colors.Orange);
                    break;

                case "Clothes":
                    pieColor = new(Colors.Purple);
                    break;

                case "Other":
                    pieColor = new(Colors.Black);
                    break;


            }

        }

        
        return pieColor ?? new SolidColorBrush(Colors.Black);

    }

    

}
