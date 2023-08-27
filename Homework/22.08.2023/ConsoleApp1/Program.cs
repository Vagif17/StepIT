#region Task 1
//Int32 number = -1;

//Console.WriteLine("Enter first number : ");
//while (number < 0 || number > 100)
//{
//    Console.WriteLine("Number must be greater than 0 and less than 100");
//    bool res = Int32.TryParse(Console.ReadLine(), out number);
//}

//if (number % 3 == 0 && number % 5 == 0)
//{
//    Console.WriteLine("Fizz buzz");
//    return;
//};

//if (number % 3 == 0) { Console.WriteLine("Fizz"); };

//if (number % 5 == 0) { Console.WriteLine("Buzz"); };

//if (number % 3 > 0 && number % 5 > 0) { Console.WriteLine(number); };

#endregion

#region Task 2

//float number;
//float percent;

//Console.WriteLine("Enter number : ");
//bool num = float.TryParse(Console.ReadLine(), out number);

//Console.WriteLine("Enter percent : ");
//bool per = float.TryParse(Console.ReadLine(), out percent);

//Console.WriteLine($"{percent} from {number} = {(number / 100) * percent } ");
#endregion

#region Task 3

//Int32 num1;
//Int32 num2;
//Int32 num3;
//Int32 num4;

//Console.WriteLine("Enter first number : ");
//bool n1 = Int32.TryParse(Console.ReadLine(), out num1);

//Console.WriteLine("Enter second number : ");
//bool n2 = Int32.TryParse(Console.ReadLine(), out num2);

//Console.WriteLine("Enter third number : ");
//bool n3  = Int32.TryParse(Console.ReadLine(),out num3);

//Console.WriteLine("Enter fourth number : ");
//bool n4 = Int32.TryParse(Console.ReadLine(), out num4);

//Int32 final_number = (num1 * 1000) + (num2 * 100) + (num3 * 10) + num4;
//Console.WriteLine(final_number);

#endregion

#region Task 4

//Console.WriteLine("Enter six digit number :");
//String tmp = (Console.ReadLine());
//tmp = $"{tmp[5]}{tmp[1]}{tmp[2]}{tmp[3]}{tmp[4]}{tmp[0]}";
//Console.WriteLine(tmp);

#endregion

#region Task 5

//using System.Globalization;

//Console.WriteLine("Enter date : ");
//String date = Console.ReadLine();
//String corrected_date = date.Replace('.', '/');
//DateTime day_of_week = DateTime.ParseExact(corrected_date, "dd/MM/yyyy", CultureInfo.InvariantCulture);


//Console.WriteLine((date) + "\n\n" + (day_of_week.DayOfWeek));
//if (date[4] == '1' || date[4] == '2' || date[3] == '1' && date[4] == '2')
//{
//    Console.WriteLine("Winter");
//}

//if (date[4] == '3' || date[4] == '4' || date[4] == '5')
//{
//    Console.WriteLine("Spring"); 
//}


//if (date[4] == '6'  || date[4] == '8' || date[4] == '8')
//{
//    Console.WriteLine("Summer");
//}

//if (date[4] == '9' || date[3] ==  '1' && date[4] == '0' || date[3] == '1' && date[4] == '1')
//{
//    Console.WriteLine("Autumn");
//}

#endregion

#region Task 6

//Console.WriteLine("(If you want end programm enter 0 )\nChoose : \n1.From Celsius to Fahrenheit\n2.From Fahrenheit to Celsius\n:");
//Int32 choice = Int32.Parse(Console.ReadLine());
//Console.WriteLine("\nEnter Temperature : ");
//float temperature = Int32.Parse(Console.ReadLine()); ;

//while (choice != 0)
//{
//    Console.WriteLine("\n(If you want end programm enter 0 )\nChoose : \n1.From Celsius to Fahrenheit\n2.From Fahrenheit to Celsius\n:");
//    choice = Int32.Parse(Console.ReadLine());

//    if (choice == 1)
//    {
//        Console.WriteLine($"Fahrenheit : {temperature * (9 / 5) + 32} ");
//    }

//    if (choice == 2)
//    {
//        Console.WriteLine($"Celsius : {(temperature - 32) * (5 / 9)}  ");
//    }
//}

#endregion

#region Task 7

//Console.WriteLine("Enter start of range : ");
//Int32 start = Int32.Parse(Console.ReadLine());
//Console.WriteLine("Enter end of range : ");
//Int32 end = Int32.Parse(Console.ReadLine());

//if (start > end)
//{
//    Int32 tmp = start; start = end;  end = tmp;
//}

//Console.WriteLine(' ');
//while (start < end + 1)
//{
//    if (start % 2 == 0)
//    {
//        Console.WriteLine(start);
//    }
//    start++;
//}


#endregion