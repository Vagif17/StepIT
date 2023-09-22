class Journal
{
    public string journal_title { get; set; }
    public string year_of_foundation { get; set; }
    public string journal_describtion { get; set; }
    public string telephone { get; set; }
    public string email { get; set; }
    public int journal_staff { get; set; }
    public Journal() { }
    public Journal(string journal_title, string year_of_foundation, string journal_describtion, string telephone, int journal_staff)
    {
        this.journal_title = journal_title;
        this.year_of_foundation = year_of_foundation;
        this.journal_describtion = journal_describtion;
        this.telephone = telephone;
        this.journal_staff = journal_staff;
    }



    public override string ToString()
    {
        return $"Title : {journal_title}\nYear of foundation : {year_of_foundation}\nDescribtion : {journal_describtion}\nTelephone : {telephone}\nEmail : {email}";
    }

    public static int operator+ (Journal a,Int32 change )
    {
       return a.journal_staff += change ;
    }

    public static int operator- (Journal a, Int32 change)
    {
        return a.journal_staff -= change;
    }

    public static bool operator< (Journal a, Journal b)
    {
        return a.journal_staff < b.journal_staff;
    }

    public static bool operator> (Journal a , Journal b)
    {
        return a.journal_staff > b.journal_staff;
    }

    public static bool operator== (Journal a , Journal b)
    { return a.journal_staff == b.journal_staff;  }

    public static bool operator!= (Journal a , Journal b)
    { return a.journal_staff != b.journal_staff; }


    public override bool Equals(object? obj)
    {
        if (obj is Journal journal)
        {
            return this.journal_staff == journal.journal_staff && this.journal_title == journal.journal_title && this.email == journal.email && this.journal_describtion == journal.journal_describtion && journal.telephone == this.telephone;
        }
        return false;    
    }

}

