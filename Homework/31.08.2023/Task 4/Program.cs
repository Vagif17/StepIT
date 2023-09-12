#region task 1

//Console.WriteLine("Enter you'r the calculus system :\n1.Decimal\n2.Hexadecimal \n: ");
//Int32 choice = Int32.Parse(Console.ReadLine());
//Decimal d;
//Hexadecimal b;

//switch (choice)
//{
//    case 1:
//        Console.WriteLine("Enter number :  ");
//        Int32 tmp_n = Int32.Parse(Console.ReadLine());
//        while (tmp_n >= 16)
//        {
//            Console.WriteLine("Wrong number; Number must be lower than 16 :  ");
//            bool tmp_n_b = Int32.TryParse(Console.ReadLine(), out tmp_n);
//        }
//        d = new() { value = tmp_n };
//        b = new(d);
//        Console.WriteLine($"{tmp_n} in xexadecimal = {b}");
//        break;

//    case 2:
//        Console.WriteLine("Enter number :  ");
//        Char tmp_n_1 = Char.Parse(Console.ReadLine());
//        Int32 tmp_n_2 = 0;
//        while (tmp_n_1 > 70 || tmp_n_1 < 48)
//        {
//            Console.WriteLine("Enter number :  ");
//            bool tmp_n_1_b = Char.TryParse(Console.ReadLine(),out tmp_n_1);
//        }
//        if ((Int32)tmp_n_1 >= 48 && (Int32)tmp_n_1 <= 57 )
//        {
//            tmp_n_2 = tmp_n_1 - 48;
//            while (tmp_n_2 >= 10)
//            {
//                Console.WriteLine("Wrong number; Number must be lower than 16 :  ");
//                bool tmp_n_b = Int32.TryParse(Console.ReadLine(), out tmp_n_2);
//            }
//        }
//        if ((Int32)tmp_n_1 >= 65 && (tmp_n_1) <= 70)
//        {
//            tmp_n_2 = tmp_n_1 - 55;
//        }
//        b = new() { value = tmp_n_2};
//        d = new(b);
//        Console.WriteLine($"{tmp_n_1} in decimal = {d}");
//        break;
//}

//class Decimal
//{
//    public Int32? value { get; set; }
//    public Decimal() { }
//    public Decimal(Hexadecimal value)
//    {
//        if (value.value != 0)
//        { 
//            this.value = value.value;
//        }  
//        else
//        {
//            this.value = (Int32)(value.value_16 - 65 + 1);
//        }    
//    }
//    public override string ToString()
//    {
//        if (this.value != null) { return value.ToString(); }
//        else { return "Error;" ; }
//    }
//}

//class Hexadecimal
//{
//    public Int32? value { get; set; }
//    public Char? value_16 { get; set; }

//    public Hexadecimal() { }
//    public Hexadecimal(Decimal value) 
//    {
//        if (value.value <= 9) { this.value = value.value; }
//        if (value.value > 9) { value_16 = (Char)(65 + (value.value - 9) - 1);}
//    }

//    public override string ToString()
//    { 
//        if (this.value != null) { return value.ToString();  }
//        else
//        {
//            if (this.value_16 != null) { return value_16.ToString(); }
//        }
//        return "Erro;";
//    }
//}

#endregion

#region Task 2
//Console.WriteLine("Enter number from 0 to 9 : ");
//String number = Console.ReadLine().ToLower();

//switch (number)
//{
//    case "zero": Console.WriteLine("0"); break;
//    case "one": Console.WriteLine("1"); break;
//    case "two": Console.WriteLine("2"); break;
//    case "three": Console.WriteLine("3"); break;
//    case "four": Console.WriteLine("4"); break;
//    case "five": Console.WriteLine("5"); break;
//    case "six": Console.WriteLine("6"); break;
//    case "seven": Console.WriteLine("7"); break;
//    case "eigth": Console.WriteLine("8"); break;
//    case "nine": Console.WriteLine("9"); break;
//    default: Console.WriteLine("Wrong number : "); break;
//}
#endregion

#region Task 3

//void check_strings (String string_)
//{
//    if (string_ == "")
//    {
//        throw new Exception("Empty;");
//    }
//    for (int i = 0; i < string_.Length; i++)
//    {
//        if (string_.ToLower()[i] < 97 || string_.ToLower()[i] > 122)
//        {
//            throw new Exception($"Inncorect symbol : {string_[i]} ");
//        }
//    }
//}

//void check_ID (String string_)
//{
//    if (string_ == "")
//    {
//        throw new Exception("ID is empty;");
//    }
//    for (int i = 0; i < string_.Length; i++)
//    {
//        if (string_[i] < 48 || string_[i] > 57)
//        {
//            throw new Exception($"Inncorect symbol : {string_[i]}");
//        }
//    }
//}

//void check_date (String string_)
//{
//    for (int i = 0; i < string_.Length; i++)
//    {
//        if (string_[i] != '.' && string_[i] < 48 && string_[i] > 57) { throw new Exception("Inncorect date;"); }    
//    }
//    if (string_ == "") { throw new Exception("Date is empty;"); }
//    if (string_.Length != 10) { throw new Exception("Inncorect date;"); }
//    if ((string_[0] > 51 && string_[0] < 48) && (string_[1] < 48 && string_[1] > 57 ) && (string_[2] != '.' && string_[5] != '.'))
//    {
//        throw new Exception("Inncorect date;");
//    }
//}



//Foreign_Passport passport_1;
//String name;
//String surname;
//String father_name;
//String Id;
//String date;


//try
//{
//    Console.WriteLine("Enter name : ");
//    name = Console.ReadLine();
//    check_strings(name);

//    Console.WriteLine("Enter surname : ");
//    surname = Console.ReadLine();
//    check_strings(surname);


//    Console.WriteLine("Enter father name : ");
//    father_name = Console.ReadLine();
//    check_strings(father_name);

//    Console.WriteLine("Enter Id of passport : ");
//    Id = Console.ReadLine();
//    check_ID(Id);

//    Console.WriteLine("Enter date of issue : ");
//    date = Console.ReadLine();
//    check_date(date);

//    passport_1= new() { name = name, surname = surname, father_name = father_name ,id = Id, date_of_issue = date };

//    Console.WriteLine(passport_1.ToString());
//}
//catch (Exception)
//{
//    throw;
//}



//class Foreign_Passport
//{
//    public String name { get; set; }
//    public String surname { get; set; }
//    public String father_name { get; set; }
//    public String date_of_issue { get; init; }
//    public String id { get; init; }

//    public Foreign_Passport() { }

//    public override string ToString()
//    {
//        return ($"\n\nName :{name}  Surname {surname} Father's name : {father_name} Id : {id} Date of Issue : {date_of_issue} ");;
//    }
//}

#endregion

#region Task 4

//try
//{
//    Console.WriteLine("Enter you'r example :");
//    String example = Console.ReadLine();
//	Int32 n1 = 0;
//	Int32 n2 = 0;
//	String tmp = "";
//	String tmp2 = "";
//	String symbol = "";
	
//	if (example == "")
//	{
//		throw new Exception("Inncorect example;");
//	}
//	for (int i = 0; i < example.Length; i++)
//	{
//		if (example[i] >= 47 && example[i] <= 58 )
//		{
//			continue;
//		}
//		else
//		{
//			if ( example[i] >= 60 && example[i] <= 62 || example[i] == 33)
//            {
//				continue;
//            }
//			else
//            {
//                throw new Exception("Inncorect exapmle;");
//            }

//        }
//	}

//	for (int i = 0; i < example.Length; i++)
//	{
//		if (symbol == "")
//		{
//			if (example[i] >= 47 && example[i] <= 58)
//			{
//				for (int b = i; b < example.Length; b++)
//				{
//                    if (example[b] < 47 || example[b] > 58)
//                    {
//                        break;
//                    }
//                    tmp += example[b];
//					i++;
					
//				}
//			}
//		}

//		if (example[i] >= 60 && example[i] <= 62 || example[i] == 33)
//		{
//			symbol += example[i];
//		}

//		if (symbol != "")
//		{
//            if (example[i] >= 47 && example[i] <= 58)
//            {
//                for (int b = i; b < example.Length; b++)
//                {
//                    if (example[b] < 47 || example[b] > 58)
//                    {
//                        break;
//                    }
//                    tmp2 += example[b];
//                    i++;
//                }
//            }
//        }


//	}

//	for (int i = 0; i < tmp.Length; i++)
//	{
//		n1 += (Int32)tmp[i];
//	}

//	for (int i = 0; i < tmp2.Length; i++)
//	{
//		n2 += (Int32)tmp2[i];
//	}

//	switch (symbol)
//	{
//		case ">":
//            Console.WriteLine(n1 > n2);
//			break;
		
//		case "<":
//			Console.WriteLine(n1 < n2);
//			break;

//		case ">=":
//			Console.WriteLine(n1 >= n2);
//			break;

//		case "<=":
//			Console.WriteLine(n1 <= n2);
//            break;

//		case "!=":
//			Console.WriteLine(n1 != n2);
//			break;

//		case "==":
//			Console.WriteLine(n1 == n2);
//            break;

//        default:
//			throw new Exception("Inncorect example;");
//			break;
//	}
//}
//catch (Exception)
//{

//	throw;
//}

#endregion