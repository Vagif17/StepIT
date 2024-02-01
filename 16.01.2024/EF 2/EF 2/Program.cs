using EF_2;
using Microsoft.Extensions.Configuration;
using System.Data.SqlClient;
using static Microsoft.EntityFrameworkCore.DbLoggerCategory.Database;

var builder = new ConfigurationBuilder();
builder.AddJsonFile("appsettings.json");

var confiq = builder.Build();
var connectionString = confiq.GetConnectionString("Default");

using SqlConnection conn = new(connectionString);


var cmd = new SqlCommand("Select * from People",conn) ;

conn.Open();

{
    using SqlDataReader reader = cmd.ExecuteReader();

    while (reader.Read())
    {
        var id = reader.GetInt32(0);
        Console.WriteLine($"{reader[0]}\t{reader[1]}\t  {reader[2]}");
    }

}