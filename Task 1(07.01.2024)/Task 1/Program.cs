using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;

// When you start app in first time table will be empty,when you start in in second time table will be with data 

var builder = new ConfigurationBuilder();

builder.AddJsonFile("SQLSettings.json");

var config = builder.Build();

var connectionString = config.GetConnectionString("Default");

using SqlConnection conn = new(connectionString);

SqlCommand command = new("select * from People", conn);


conn.Open();

{
    using SqlDataReader reader = command.ExecuteReader();

    while (reader.Read())
    {
        var id = reader.GetInt32(0);
        Console.WriteLine($"{reader[0]}\t{reader[1]}\t  {reader[2]}");
    }

}


command = new SqlCommand("SELECT SUM(Id) FROM People ", conn);
var res3 = command.ExecuteScalar();

command = new SqlCommand("INSERT INTO People (Name,Surname) VALUES (N'Vagif', N'Aliev' )", conn);
var res1 = command.ExecuteNonQuery();

command = new SqlCommand("INSERT INTO People (Name,Surname) VALUES (N'Ibragim', N'Aliev' )", conn);
var res2 = command.ExecuteNonQuery();