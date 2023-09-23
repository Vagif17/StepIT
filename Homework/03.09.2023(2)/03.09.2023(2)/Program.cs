#region Task 1

//Money price = new Money(1199,0);
//Product product = new Product("Smartphone","Iphone 15",price);
//Console.WriteLine(price);

//price.AddUSD(1);
//price.AddCents(50);
//Console.WriteLine(price);

//price.ReducePrice(0, 50);

//Console.WriteLine(price);

//product.AddUSD(1);
//product.AddCents(900);
//Console.WriteLine(product);

//product.ReducePrice(1, 50);
//Console.WriteLine(product);

//product.IncreasePrice(0, 50);
//Console.WriteLine(product);

#endregion

#region Task 2
//Kettle kettle = new();
//Microwave microwave = new();
//Car car = new ();
//Steamboat Steamboat = new();

//Console.WriteLine(kettle.Show());
//Console.WriteLine(kettle.Sound());
//Console.WriteLine(kettle.Desc());

//Console.WriteLine();

//Console.WriteLine(microwave.Show());
//Console.WriteLine(microwave.Sound());
//Console.WriteLine(microwave.Desc());

//Console.WriteLine();

//Console.WriteLine(car.Show());
//Console.WriteLine(car.Sound());
//Console.WriteLine(car.Desc());

//Console.WriteLine();

//Console.WriteLine(Steamboat.Show());
//Console.WriteLine(Steamboat.Sound());
//Console.WriteLine(Steamboat.Desc());
//class Device
//{
//    public string Name { get; set; }
//    public string Description { get; set; }

//    public Device() { }
//    public Device(string name, string description)
//    {
//        Name = name;
//        Description = description;
//    }

//    public string Sound()
//    {
//        return $"Sound of {Name}";
//    }

//    public string Show()
//    {
//        return $"Name : {this.Name} \nDescription : {this.Description}";
//    }

//    public string Desc() 
//    {
//        return  this.Description ;
//    }


//}

//class Kettle : Device
//{
//    public Kettle(String name = "Kettle",String description = "To make tea") : base(name, description) { }
//}

//class Microwave : Device
//{
//    public Microwave(String name = "Microwave",String description = "To heat up food") : base(name, description) { }
//}

//class Car : Device
//{
//    public Car(String name = "Car", String description = "For fast travel") : base(name, description) { }
//}

//class Steamboat : Device
//{
//    public Steamboat(String name = "Steamboat", String description = "For travel on water") : base(name, description) { }
//}
#endregion

#region Task 3

//Violin violin = new();
//Trombone trombone = new();
//Ukulele ukulele = new();
//Cello cello= new();

//Console.WriteLine(violin.show());
//Console.WriteLine(violin.sound());
//Console.WriteLine(violin.desc());
//Console.WriteLine(violin.history());

//Console.WriteLine();

//Console.WriteLine(trombone.show());
//Console.WriteLine(trombone.sound());
//Console.WriteLine(trombone.desc());
//Console.WriteLine(trombone.history());

//Console.WriteLine();

//Console.WriteLine(ukulele.show());
//Console.WriteLine(ukulele.sound());
//Console.WriteLine(ukulele.desc());
//Console.WriteLine(ukulele.history());

//Console.WriteLine();

//Console.WriteLine(cello.show());
//Console.WriteLine(cello.sound());
//Console.WriteLine(cello.desc());
//Console.WriteLine(cello.history());

//class MusicalInstrument

//{
//    public string Name { get; set; }
//    public string Description { get; set; }
//    public string History { get; set; }

//    public MusicalInstrument() { }
//    public MusicalInstrument(string name, string description,string history)
//    {
//        Name = name;
//        Description = description;
//        History = history;
//    }

//    public string sound()
//    {
//        return $"Sound of {Name}";
//    }

//    public string show()
//    {
//        return $"Name : {this.Name} \nDescription : {this.Description} \nHistory : {this.History}";
//    }

//    public string desc()
//    {
//        return this.Description;
//    }

//    public string history()
//    {
//;        return $"History : {this.History}";
//    }


//}

//class Violin : MusicalInstrument
//{
//    public Violin(String name = "Violin", String description = "Stringed instrument",String History = "The violin was made in 1620") : base(name, description,History) { }
//}

//class Trombone : MusicalInstrument
//{
//    public Trombone(String name = "Trombone", String description = "Wind Instrument",String History = "The trombone was invented in the 15th century") : base(name, description,History) { }
//}

//class Ukulele : MusicalInstrument
//{
//    public Ukulele(String name = "Ukulele", String description = "Stringed instrument", String History = "The Ukulele was made in 1880") : base(name, description,History) { }
//}

//class Cello : MusicalInstrument
//{
//    public Cello(String name = "Cello", String description = "Stringed instrument", String History = "The Cello was invented in the 16th century") : base(name, description,History) { }
//}

#endregion

#region Task 4

//President president = new();
//Security security = new();
//Manager manager = new();
//Engineer engineer = new();


//president.Print();
//security.Print();
//manager.Print();
//engineer.Print();

//abstract class Worker
//{
//    abstract public void Print();
//}

//class President : Worker
//{
//    public override void Print()
//    {
//        Console.WriteLine("President - is a person who rule the country");
//    }
//}

//class Security : Worker
//{
//    public override void Print()
//    {
//        Console.WriteLine("Securtiy - is a person who protects other person");
//    }
//}

//class Manager : Worker
//{
//    public override void Print()
//    {
//        Console.WriteLine("Manager - a professional who takes a leadership role in an organisation and manages a team of employees");
//    }
//}

//class Engineer : Worker
//{
//    public override void Print()
//    {
//        Console.WriteLine("Engineer -  a person who uses scientific knowledge to design, construct, and maintain engines and machines or structures such as roads, railways, and bridges");
//    }
//}

#endregion