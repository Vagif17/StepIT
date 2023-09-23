class Product : Money
{
    public Product() { }
    public Product(String Name,String Describtion ,Money Price) 
    {
        this.Name = Name;
        this.Description = Describtion;
        this.Price = Price; 
    }
   
    public override string ToString()
    {
        return $"Name : {Name}\nDesribtion : {Description}\nPrice :  {Price}";

    }

    public override Int32 AddUSD(Int32 USD) { return this.Price.USD += USD; }

    public virtual Int32 AddCents(Int32 Cents)
    {
        if (this.Price.Cents + Cents >= 100)
        {
            this.Price.USD += (this.Price.Cents + Cents) / 100;
            return this.Price.Cents += Cents % 100;
        }
        return this.Price.Cents += Cents;
    }

    public void ReducePrice(Int32 USD1,Int32 Cents1)
    {
        Price.ReducePrice(USD1, Cents1);
    }

    public void IncreasePrice(Int32 USD,Int32 Cents)
    {
        Price.AddUSD(USD);
        Price.AddCents(Cents);
    }

    public string Name { get; set; }
    public string Description { get; set; }
    public Money Price { get; set; }

}