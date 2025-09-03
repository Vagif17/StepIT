using System.Runtime.CompilerServices;
using System.Text;
using HW2.Models;

LibraryContext libraryContext = new LibraryContext();


List<string> menuItems =
["Get All",
    "Add",
    "Edit",
    "Exit"
];
ConsoleKeyInfo key;
int count = 0;



bool isloading = false;
bool isthreadactive = false;
ShowMenu();
Thread thread = new Thread(() => Loading(null));

while (true)
{
    key = Console.ReadKey();

    Console.Clear();
    switch (key.Key)
    {
        case ConsoleKey.UpArrow:
            count--;
            break;

        case ConsoleKey.DownArrow:
            count++;
            break;
        case ConsoleKey.Enter:
            if (count == 0 && isthreadactive == false)
            { 
                thread = new Thread(() => Loading(GetAll));
                isloading = true;
            }
            else if (count == 1 && isthreadactive == false)
            {
                AddAuthor();
            }
            else if (count == 2  && isthreadactive == false)
            {
                EditAuthor();
            }

            break;

    }

    if (isloading == true)
    {
        thread.Start();
        isloading = false;
        isthreadactive = true;
    }
    else
    {
        if (isthreadactive) ;
        else
            ShowMenu();
    }
}

#region Functions


void Loading(Action? action)
{
    StringBuilder Message = new("Loading ---------->");
    
    for (int i = 0; i < 10; i++)
    {
        ShowMenu();
        Console.WriteLine(Message);
        Message[8 + i] = '#';
        Thread.Sleep(500);
        Console.Clear();

    }

    isthreadactive = false;
    action.Invoke();
}

void GetAll()
{
    Console.Clear();
    Console.WriteLine("All autors:");
    foreach (var author in libraryContext.Authors) { Console.WriteLine($"ID {author.Id} {author.LastName} {author.FirstName}");} ;
    Console.ReadKey();
}
void AddAuthor()
{
    Console.Clear();
    Console.Write("Name:");
    string name = Console.ReadLine();
    Console.Clear();
    Console.Write("Surname:");
    string surname = Console.ReadLine();

    libraryContext.Add(new Author() { FirstName = name, LastName = surname,  Id = libraryContext.Authors.ToList()[libraryContext.Authors.Count() - 1].Id + 1 });
    libraryContext.SaveChanges();
    
    Console.Clear();
}

void ShowMenu()
{
    if (count < 0) count = menuItems.Count - 1;

    for (int i = 0; i < menuItems.Count; i++)
    {
        if (i == count % menuItems.Count)
            Console.WriteLine($"> {menuItems[i]}");
        else
        {
            Console.WriteLine(menuItems[i]);
        }
    }

}

void EditAuthor()
{
    Console.Clear();
    
    List<Author> authors = libraryContext.Authors.ToList();
    int Id;

    Console.WriteLine("All autors:");
    foreach (var author in libraryContext.Authors) { Console.WriteLine($"ID {author.Id} {author.LastName} {author.FirstName}");} ;
    Console.Write("Choose ID :");
    Id = Convert.ToInt32(Console.ReadLine());

    foreach (var author in authors)
    {
        if (Id == author.Id)
        {
            Console.Clear();
            Console.Write("Name:");
            string name = Console.ReadLine();
            Console.Clear();
            Console.Write("Surname:");
            string surname = Console.ReadLine();

            author.FirstName = name;
            author.LastName = surname;
            
            libraryContext.Authors.Update(author);
            libraryContext.SaveChanges();
            return;
        }
    }
    
    Console.WriteLine("Invalid ID"); 
    Thread.Sleep(1000);
    
}

#endregion
