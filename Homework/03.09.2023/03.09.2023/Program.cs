#region Task 1
//void action_with_journal(Journal a, Journal b,Int32 choice)
//{
//    switch (choice)
//    {   
//        case 1:
//            Console.WriteLine(a);
//            break;

//        case 2:
//            Console.WriteLine(a.journal_title);
//            break;

//        case 3:
//            Console.WriteLine(a.year_of_foundation);
//            break;

//        case 4:
//            Console.WriteLine(a.telephone);
//            break;

//        case 5:
//            Console.WriteLine(a.journal_describtion);
//            break;

//        case 6:
//            Console.WriteLine(a.email);
//            break;

//        case 7:
//            Console.WriteLine("Choose : 1.Change staff's amount   2.Show staff now   3.Staff comparisons:");
//            Int32 choice_staff = Int32.Parse(Console.ReadLine());
//            switch (choice_staff)
//            {
//                case 1:
//                    Console.WriteLine("Enter change 1. '+'  2. '-'");
//                    Int32 choice_change = Int32.Parse(Console.ReadLine());
//                    Console.WriteLine("Enter num : ");
//                    Int32 num_to_change = int.Parse(Console.ReadLine());
//                    switch (choice_change)
//                    {
//                        case 1:
//                            Console.WriteLine($"Staff now : {a + num_to_change}");
//                            break;

//                        case 2:
//                            Console.WriteLine($"Staff now : {a - num_to_change}");
//                            break;
//                    }
//                    break;

//                case 2: Console.WriteLine(a.journal_staff); break;

//                case 3: 
//                    if (a != b)
//                    {
//                        Console.WriteLine("Journals are different");
//                    }
//                    if (a == b)
//                    {
//                        Console.WriteLine("Journals are the same");
//                    }
//                    if (a > b)
//                    {
//                        Console.WriteLine("This journal bigger than other");
//                    }
//                    if (a < b)
//                    {
//                        Console.WriteLine("Thiw journal lower than other");
//                    }

//                    break;
//            }
//            break;

//        case 8:
//            if (a.Equals(b)) { Console.WriteLine("Journals are the same"); }
//            else { Console.WriteLine("Journals are different"); }
//            break;
//    }
//}


//Int32 choice = 1;
//Console.WriteLine("Enter First Journal's:\n1.Title 2.Year of foundation 3.Describtions 4.Telephone 5.Email : 6.Staff : \n ");
//Journal c = new() { journal_title = Console.ReadLine(), year_of_foundation = Console.ReadLine(), journal_describtion = Console.ReadLine(), telephone = Console.ReadLine(), email = Console.ReadLine(), journal_staff = Int32.Parse(Console.ReadLine()) };

//Console.WriteLine("\n\n\nEnter Second Journal's:\n1.Title 2.Year of foundation 3.Describtions 4.Telephone 5.Email : 6.Staff : \n ");
//Journal d = new() { journal_title = Console.ReadLine(), year_of_foundation = Console.ReadLine(), journal_describtion = Console.ReadLine(), telephone = Console.ReadLine(), email = Console.ReadLine(), journal_staff = Int32.Parse(Console.ReadLine()) };


//while (choice != 0)
//{
//    Console.WriteLine("Choice Journal (1,2) : ");
//    Int32 choice_journal = Int32.Parse(Console.ReadLine());
//    if (choice_journal == 1)
//    {
//        Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show title\n3.Show year of foundation\n4.Show telephone\n5.Show describtion \n6.Show email \n7.Staff   \n8.Equals check :");
//        bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);
//        action_with_journal(c,d, choice);
//    }

//    if (choice_journal == 2)
//    {
//        Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show title\n3.Show year of foundation\n4.Show telephone\n5.Show describtion \n6.Show email \n7.Staff   \n8.Equals check :");
//        bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);
//        action_with_journal(d,c, choice);
//    }
//}

#endregion

#region Task 2

//using System;

//void action_with_shop(Shop a, Shop b,Int32 choice)
//{

//    switch (choice)
//    {
//        case 1:
//            Console.WriteLine(a);
//            break;

//        case 2:
//            Console.WriteLine(a.title);
//            break;

//        case 3:
//            Console.WriteLine(a.address);
//            break;

//        case 4:
//            Console.WriteLine(a.telephone);
//            break;

//        case 5:
//            Console.WriteLine(a.describtion);
//            break;

//        case 6:
//            Console.WriteLine(a.email);
//            break;
//        case 7:
//            Console.WriteLine("choose : 1.change Shop's area   2.Show shop's area now   3.Shop comparisons\n:");
//            Int32 choice_staff = Int32.Parse(Console.ReadLine());
//            switch (choice_staff)
//            {
//                case 1:
//                    Console.WriteLine("Enter change 1. '+'  2. '-'");
//                    Int32 choice_change = Int32.Parse(Console.ReadLine());
//                    Console.WriteLine("Enter num : ");
//                    Int32 num_to_change = Int32.Parse(Console.ReadLine());
//                    switch (choice_change)
//                    {
//                        case 1:
//                            Console.WriteLine($"Store_Area now : {a + num_to_change}");
//                            break;

//                        case 2:
//                            Console.WriteLine($"store now : {a - num_to_change}");
//                            break;
//                    }
//                    break;

//                case 2: Console.WriteLine(a.store_area); break;

//                case 3:
//                    if (a != b)
//                    {
//                        Console.WriteLine("Shops'Area are different");
//                    }
//                    if (a == b)
//                    {
//                        Console.WriteLine("Shops area are the same");
//                    }
//                    if (a > b)
//                    {
//                        Console.WriteLine("this Shops'Area bigger than other");
//                    }
//                    if (a < b)
//                    {
//                        Console.WriteLine("thiw Shops'Area lower than other");
//                    }

//                    break;
//            }
//            break;
//            break;
//        case 8:
//            if (a.Equals(b)) { Console.WriteLine("Shops are the same"); }
//            else { Console.WriteLine("Shops are different"); }
//            break;
//    }
//}


//Int32 choice = 1;
//Console.WriteLine("Enter First Shop's:\n1.Title 2.Address 3.Describtions 4.Telephone 5. Email 6.Store Area :\n ");
//Shop a = new() { title = Console.ReadLine(), address = Console.ReadLine(), describtion = Console.ReadLine(), telephone = Console.ReadLine(), email = Console.ReadLine(),store_area = Int32.Parse(Console.ReadLine()) };

//Console.WriteLine("Enter Second Shop's:\n1.Title 2.Address 3.Describtions 4.Telephone 5. Email 6.Store Area :\n ");
//Shop b = new() { title = Console.ReadLine(), address = Console.ReadLine(), describtion = Console.ReadLine(), telephone = Console.ReadLine(), email = Console.ReadLine(), store_area = Int32.Parse(Console.ReadLine()) };


//while (choice != 0)
//{
//    Console.WriteLine("Choice Shop (1,2) : ");
//    Int32 choice_shop = Int32.Parse(Console.ReadLine());
//    if (choice_shop == 1)
//    {
//        Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show title\n3.Show address\n4.Show telephone\n5.Show describtion \n6.Show email  \n7.Store Area  \n8.Equals check\n:");
//        bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);
//        action_with_shop(a, b, choice);
//    }

//    if (choice_shop == 2)
//    {
//        Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show title\n3.Show address\n4.Show telephone\n5.Show describtion \n6.Show email  \n7.Store Area \n8.Equals check \n:");
//        bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);
//        action_with_shop(b, a, choice);
//    }

//}

#endregion

#region Task 3

//ListOfBooks a = new ListOfBooks();
//a.AddBook("First");
//a.AddBook("Second");
//a.AddBook("Third");
//Console.WriteLine(a);
//Console.WriteLine(a.SearchBook("Second"));
//Console.WriteLine(a.SearchBook("Fourth"));

//Console.WriteLine("Choose index to delete : ");
//Int32 index = Int32.Parse(Console.ReadLine());
//a.DeleteBook(index); 

//Console.WriteLine(a);

#endregion