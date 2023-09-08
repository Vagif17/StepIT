#region Task 1

//Console.WriteLine("Enter size : ");
//Int32 size;
//bool size_b = Int32.TryParse(Console.ReadLine(), out size);
//Console.WriteLine("Enter symbol : ");
//char symbol = Char.Parse(Console.ReadLine());
//for(int i = 0;i < size; i++)
//{
//    for (int j = 0; j < size; j++)
//    {
//        Console.Write(symbol);
//    }
//    Console.WriteLine();
//}

#endregion

#region Task 2

//Console.WriteLine("Enter number : ");
//String number = Console.ReadLine();
//Int32 succes = number.Length;
//Int32 now = 0;
//char[] char_number = number.ToCharArray();
//Array.Reverse(char_number);
//for (int i = 0;i < number.Length; i++)
//{ 
//    if (number[i] == char_number[i])
//    {
//        now++;
//    }
//}
//string reverse_number = "";
//for (int i = 0;i < number.Length; i++)
//{
//    reverse_number += char_number[i];
//}

//if (now == succes)
//{
//    Console.WriteLine($"This is palindrome : {number} = {reverse_number}");
//}

//else
//{
//    Console.WriteLine("This is not palindrome ");
//}

#endregion

#region Task 3

//Int32[] array = new int[7] {1,2,3,4,5,6,7};
//Int32[] array_delete = new int[3] {1,4,7};
//Int32 new_capacity = array.Length;
//for (int i = 0;i < array_delete.Length; i++)
//{
//	for (int b = 0; b < array.Length; b++)
//	{
//		if (array[b] == array_delete[i])
//		{
//			new_capacity--;
//		}
//	}
//}


//Int32[] array_final = new int[new_capacity];
//Int32 index = 0;
//{
//	for (int b = 0; b < array.Length; b++)
//	{
//		for (int j = 0; j < array_delete.Length; j++)
//		{
//			if (array[b] == array_delete[j])
//			{
//				break;
//			}


//			if (j + 1 == array_delete.Length)
//			{
//				array_final[index] = array[b];
//				index++;
//			}
//		}
//	}
//}


//for (int i = 0; i < new_capacity; i++)
//{
//	Console.Write($"{array_final[i]} ");
//}
#endregion

#region Task 4
//Int32 choice = 1;
//Console.WriteLine("Enter Web site:\n1.Name 2.URL 3.Describtions 4. IP : ");
//Web_Site a = new() { web_site_name = Console.ReadLine(), web_site_url = Console.ReadLine(), web_site_describtion = Console.ReadLine(), web_site_ip = Console.ReadLine() };

//while (choice != 0)
//{

//    Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show name\n3.Show URL\n4.Show describtion\n5.Show Ip \n:");
//    bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);

//    switch (choice)
//    {
//        case 1 :
//            Console.WriteLine(a);
//            break;

//        case 2 :
//            Console.WriteLine(a.show_web_site_name());
//            break;

//        case 3 :
//            Console.WriteLine( a.show_web_site_url());
//            break;

//        case 4 :
//            Console.WriteLine(a.show_web_site_describtion());
//            break;

//        case 5 :
//            Console.WriteLine(a.show_web_site_ip());
//            break;
//    }
//}
//class Web_Site
//{
//    public string web_site_name { get; set; }
//    public string web_site_url { get; set; }
//    public string web_site_describtion { get; set; }
//    public string web_site_ip { get; set; }

//    public Web_Site() { }
//    public Web_Site(string web_site_name, string web_site_url, string web_site_describtion, string web_site_ip)
//    {
//        this.web_site_name = web_site_name;
//        this.web_site_url = web_site_url;
//        this.web_site_describtion = web_site_describtion;
//        this.web_site_ip = web_site_ip;
//    }

//    public string show_web_site_name() { return web_site_name; }
//    public string show_web_site_url() { return web_site_url; }
//    public string show_web_site_describtion() { return web_site_describtion; }
//    public string show_web_site_ip() { return web_site_ip; }

//    public override string ToString()
//    {
//        return $"Name : {web_site_name}\nUrl : {web_site_url}\nDescribtion : {web_site_describtion}\nIp : {web_site_ip}";
//    }
//}




#endregion

#region Task 5

//Int32 choice = 1;
//Console.WriteLine("Enter Journal's:\n1.Title 2.Year of foundation 3.Describtions 4.Telephone 5. Email :\n ");
//Web_Site a = new() { journal_title = Console.ReadLine(), year_of_foundation = Console.ReadLine(), journal_describtion = Console.ReadLine(), telephone = Console.ReadLine(), email = Console.ReadLine()};

//while (choice != 0)
//{

//    Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show title\n3.Show year of foundation\n4.Show telephone\n5.Show describtion \n6.Show email  \n:");
//    bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);

//    switch (choice)
//    {
//        case 1:
//            Console.WriteLine(a);
//            break;

//        case 2:
//            Console.WriteLine(a.show_journal_title());
//            break;

//        case 3:
//            Console.WriteLine(a.show_year_of_foundation());
//            break;

//        case 4:
//            Console.WriteLine(a.show_telephone());
//            break;

//        case 5:
//            Console.WriteLine(a.show_journal_describtion());
//            break;

//       case 6:
//            Console.WriteLine(a.show_email());
//            break;
//    }
//}
//class Web_Site
//{
//    public string journal_title { get; set; }
//    public string year_of_foundation { get; set; }
//    public string journal_describtion { get; set; }
//    public string telephone { get; set; }

//    public string email { get; set; }

//    public Web_Site() { }
//    public Web_Site(string journal_title, string year_of_foundation, string journal_describtion, string telephone)
//    {
//        this.journal_title = journal_title;
//        this.year_of_foundation = year_of_foundation;
//        this.journal_describtion = journal_describtion;
//        this.telephone = telephone;
//    }

//    public string show_journal_title() { return journal_title; }
//    public string show_year_of_foundation() { return year_of_foundation; }
//    public string show_journal_describtion() { return journal_describtion; }
//    public string show_telephone() { return telephone; }

//    public string show_email() { return email; }
//    public override string ToString()
//    {
//        return $"Title : {journal_title}\nYear of foundation : {year_of_foundation}\nDescribtion : {journal_describtion}\nTelephone : {telephone}\nEmail : {email}";
//    }
//}


#endregion

#region Task 6

//Int32 choice = 1;
//Console.WriteLine("Enter Shop's:\n1.Title 2.Address 3.Describtions 4.Telephone 5. Email :\n ");
//Web_Site a = new() { title = Console.ReadLine(), address = Console.ReadLine(), describtion = Console.ReadLine(), telephone = Console.ReadLine(), email = Console.ReadLine() };

//while (choice != 0)
//{

//    Console.WriteLine("Choose : \n0.End\n1.Show all\n2.Show title\n3.Show address\n4.Show telephone\n5.Show describtion \n6.Show email  \n:");
//    bool choice_b = Int32.TryParse(Console.ReadLine(), out choice);

//    switch (choice)
//    {
//        case 1:
//            Console.WriteLine(a);
//            break;

//        case 2:
//            Console.WriteLine(a.show_title());
//            break;

//        case 3:
//            Console.WriteLine(a.show_address());
//            break;

//        case 4:
//            Console.WriteLine(a.show_telephone());
//            break;

//        case 5:
//            Console.WriteLine(a.show_describtion());
//            break;

//        case 6:
//            Console.WriteLine(a.show_email());
//            break;
//    }
//}
//class Web_Site
//{
//    public string title { get; set; }
//    public string address { get; set; }
//    public string describtion { get; set; }
//    public string telephone { get; set; }

//    public string email { get; set; }

//    public Web_Site() { }
//    public Web_Site(string title, string address, string describtion, string telephone)
//    {
//        this.title = title;
//        this.address = address;
//        this.describtion = describtion;
//        this.telephone = telephone;
//    }

//    public string show_title() { return title; }
//    public string show_address() { return address; }
//    public string show_describtion() { return describtion; }
//    public string show_telephone() { return telephone; }

//    public string show_email() { return email; }
//    public override string ToString()
//    {
//        return $"Title : {title}\nAddress : {address}\nDescribtion : {describtion}\nTelephone : {telephone}\nEmail : {email}";
//    }
//}

#endregion