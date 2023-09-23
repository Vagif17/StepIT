 class Money
{
    public int USD { get; set; }
    public int Cents { get; set; }

    public Money() { }
    public Money(int USD, int Cents)
    {
        this.USD = USD;
        if (Cents < 100)
        {
            this.Cents = Cents;
        }
        else 
        {
            this.USD += Cents / 100;
            this.Cents = Cents % 100;
        }
    }

    public virtual Int32 AddUSD (Int32 USD)  { return this.USD += USD; }
    public virtual  Int32 AddCents(Int32 Cents) 
    { 
        if (this.Cents + Cents >= 100)
        {
            USD += (this.Cents + Cents) / 100;
            if (this.Cents + Cents == 100)
            {
                return this.Cents = 0;
            }
            return this.Cents += Cents % 100;
        }
        return this.Cents += Cents;
    }

    public  Int32 ReducePrice(Int32 USD,Int32 Cents)
    {

        if (this.Cents == 0)
        {
            if (Cents < 100)
            {
                this.USD -= 1;
                return this.Cents = 100 - Cents;
            }
            if (Cents > 100)
            {
                this.USD -= (Cents / 100) + 1;
                return this.Cents += Cents % 100;
            }
        }


        if (this.Cents - Cents < 0)
        {
            this.USD -= Cents / 100;
            this.Cents = ((this.Cents - Cents) % 100) * -1;
            return this.Cents;
        }

        return this.Cents -= Cents;
    }

    public override string ToString()
    {
        return $"USD : {USD}  Cents : {Cents}";
    }
}