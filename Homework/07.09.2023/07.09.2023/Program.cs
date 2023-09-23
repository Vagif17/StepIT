using System.Text.RegularExpressions;
using System.Text.Json;
using System.Text.Json.Serialization;

using Barn_cs;
using Product_cs;

Barn MainBarn = new Barn();
Product[] Products = new Product[5];

Products[0] = new Product("0000","Potatoes","01.10.2020","23.09.2023",20,18);
Products[1] = new Product("1001", "Tomatoes", "01.10.2020", "23.09.2023", 26,22);
Products[2] = new Product("2002", "Melons", "01.10.2020", "23.09.2023", 16, 10);
Products[3] = new Product("3003", "Watermelon", "01.10.2020", "23.09.2023", 24, 20);
Products[4] = new Product("4004", "Cucumber", "01.10.2020", "23.09.2023", 13, 10);

Int32 choice = 1;
Int32 length = 0;
Int32 index = 0;
while (choice != 0)
{
Console.WriteLine("Choose :\n 0.End \n 1.Add Product  \n 2.Delete Product  \n 3.Show All  \n 4.Save in file \n : ");
choice = Int32.Parse(Console.ReadLine());
    switch (choice)
    {
        case 1:
            if (index < 5)
            {
                MainBarn.add_product(Products[index]);
                index++;
            }
            else
            {
                throw new Exception("There is no room in the barn");
            }
            break;

        case 2:
            Console.WriteLine(MainBarn);
            Console.WriteLine("Choose index to delete : ");
            Int32 choice_index = Int32.Parse(Console.ReadLine());
            MainBarn.delete_product(choice_index);

            break;

       case 3:
            Console.WriteLine(MainBarn);
            break;

        case 4:
            MainBarn.SaveToJson(MainBarn);
            break;
    }
}