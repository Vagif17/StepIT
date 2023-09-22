class Shop
{
    public string title { get; set; }
    public string address { get; set; }
    public string describtion { get; set; }
    public string telephone { get; set; }
    public int store_area { get; set; }

    public string email { get; set; }

    public Shop() { }
    public Shop(string title, string address, string describtion, string telephone,Int32 store_area )
    {
        this.title = title;
        this.address = address;
        this.describtion = describtion;
        this.telephone = telephone;
        this.store_area = store_area;
    }
    
    public static bool operator<(Shop a,Shop b) { return a.store_area < b.store_area; }

    public static bool operator>(Shop a,Shop b) { return a.store_area > b.store_area; }

    public static int operator+(Shop a,Int32 change_area) { return a.store_area += change_area; }

    public static int operator- (Shop a,Int32 change_area) { return a.store_area -= change_area; ;}


    public static bool operator ==(Shop a, Shop b)   { return a.store_area == b.store_area; }

    public static bool operator !=(Shop a, Shop b )  { return a.store_area != b.store_area; }


    public override string ToString()
    {
        return $"Title : {title}\nAddress : {address}\nDescribtion : {describtion}\nTelephone : {telephone}\nEmail : {email} \nStore Are : {store_area}";
    }

    public override bool Equals(object? obj)
    {
        if (obj is Shop shop)
        {
            return this.email == shop.email && this.title == shop.title && this.telephone == shop.telephone && this.address == shop.address && this.describtion == shop.describtion && this.store_area == shop.store_area ;
        }
        else { return false; }
    }
}