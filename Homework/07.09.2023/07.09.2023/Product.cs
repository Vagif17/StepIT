using System;

namespace Product_cs
{

    class Product
    {
        public String ID { get; set; }
        public String Name { get; set; }
        public String ProductionDate { get; set; }
        public String ExpiresOn { get; set; }
        public Int32 Bruto_Weight { get; set; }
        public Int32 Netto_Weight { get; set; }

        public Product() { }
        public Product(string iD, string name, string productionDate, string expiresOn, int bruto_Weight, int netto_Weight)
        {
            ID = iD;
            Name = name;
            ProductionDate = productionDate;
            ExpiresOn = expiresOn;
            Bruto_Weight = bruto_Weight;
            Netto_Weight = netto_Weight;
        }

        public override string ToString()
        {
            return $"ID : {ID} \nName : {Name} \nProduction Date : {ProductionDate} \nExpires on : {ExpiresOn} \nBrutto Wight : {Bruto_Weight} \nNetto Weight {Netto_Weight}"; 
        }


    }
}
