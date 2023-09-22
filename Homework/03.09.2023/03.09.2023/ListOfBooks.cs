class ListOfBooks
{
    private string[] _books = new string[4];
    public int books_now { get; set; }

    public void AddBook(string book)
    {
        if (books_now == _books.Length) 
        { 
            string[] _tmpBooks = new string[4];
            for (int i = 0; i < _books.Length; i++)
            {
                _tmpBooks[i] = _books[i];
            }
            _books = new string [books_now * 2];
            for (int i = 0; i < _tmpBooks.Length; i++)
            {
                _books[i] = _tmpBooks[i];
            }
        }
        _books[books_now] = book;
        books_now++;
    }

    public void DeleteBook(int Index)
    {
        Int32 ind = 0;
        string[] _tmpBooks = new string[books_now];
        for (int i = 0; i < books_now; i++)
        {
            if (i != Index)
            {
                _tmpBooks[ind] = _books[i];
                ind++;
            }
        }

        _books = new String[_books.Length];
        for (int i = 0; i < books_now; i++)
        { 
            _books[i] = _tmpBooks[i];
        }
        books_now--;

    }


    public String SearchBook(String book)
    {
        for (int i = 0; i < _books.Length; i++)
        {
            if (_books[i] == book)
            {
                return $"The {book} is on list.Index : {i}";
            }
        }
        return $"{book} Is not found";
    }

    public string this[int Index]
    {
        get { return _books[Index]; }
        set { _books[Index] = value; }
    }

    public override string ToString()
    {
        for (int i = 0; i < books_now - 1; i++)
        {
            Console.WriteLine($"Index : {i}");
            Console.WriteLine($"Book : {_books[i]}");
        }
        return $"Index : { books_now - 1}\nBook : {_books[books_now - 1]}"; 
    }
}

