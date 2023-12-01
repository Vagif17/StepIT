using PcBuilder.Classes;

ComputerBuilder computerBuilder = new ComputerBuilder();
Director director = new Director();
Computer computer = computerBuilder.GetResult();


director.DesignerPcSet(computerBuilder);
Console.WriteLine($"Designers PC:\n{computer}");


director.GamerPcSet(computerBuilder);
Console.WriteLine($"\n\nGamers PC :\n{computer}");

director.OfficeSPcSet(computerBuilder);
Console.WriteLine($"\n\nOffice PC :\n{computer}");
