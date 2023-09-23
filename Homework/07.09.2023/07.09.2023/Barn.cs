using Product_cs;
using System.Text.RegularExpressions;
using System.Text.Json;
using System.Text.Json.Serialization;
namespace Barn_cs
{
    
class Barn 
{
    Product[] products = new Product[5];
    static Int32 products_now = 0;
    
    
    public void add_product(Product new_product)
    {
        if (products_now < products.Length)
        {
            products[products_now] = new_product;
            products_now++;
           return;
        }

        Product[] tmp_products = new Product[products_now * 2];

        if (products_now == products.Length) 
        {
            for (int i = 0; i < products_now; i++)
            {
                tmp_products[i] = products[i];
            }
        }

        products = new Product [products_now * 2];
        if (products_now == products.Length)
        {
            for (int i = 0; i < products_now; i++)
            {
                products[i] = tmp_products[i];
            }
        }
    }

    public void delete_product(Int32 index)
    {
        Product[] tmp_products = new Product[products_now - 1];
       Int32 Index = 0;
        for (int i = 0; i < products_now; i++)
        {
            if (i != index)
            {
                tmp_products[Index] = products[i];
                Index++;
            }
        }

        products = new Product[products_now * 2];
        for (int i = 0; i < tmp_products.Length; i++)
        {
            products[i] = tmp_products[i];
        }
       products_now--;
        
    }

        public Product this[int index]
        {
            get
            {
                return products[index];
            }
            set
            {
                products[index] = value;
            }
        }

        public override string ToString()
        {
            for (int i = 0 ; i < products_now  ; i++)
            {
                Console.WriteLine($"\nIndex : {i}   Product : {products[i]}");
            }
            if (products_now == products.Length)
            {
                return $"\nIndex : {products.Length - 1} Product : {products[products.Length - 1]}";
            }
            return "";
        }

        public void SaveToJson(Barn barn)
        {
            using FileStream fs = new("data.json", FileMode.OpenOrCreate);
            using StreamWriter sw = new(fs);

            List<Product> ProductsList = new()
            {
                barn.products[0],
                barn.products[1],
                barn.products[2],
                barn.products[3],
                barn.products[4],
            };

            //string json = JsonSerializer.Serialize(ProductsList); // Method one (I don't like it :( )
            //sw.WriteLine(json);
            foreach (Product p in ProductsList) // Method two (I like it :) )
            { 
                sw.WriteLine($"{p} \n");
            }
        }

    }
}
