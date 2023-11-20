using GalaSoft.MvvmLight.Messaging;
using MyMonefy.Messages;
using MyMonefy.Models;
using MyMonefy.Services.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using System.Windows;

namespace MyMonefy.Services.Classes;

class UserService : IUserService
{
    private readonly IMessenger _messenger;

    public UserService(IMessenger messenger)
    {
        _messenger = messenger;
    }

    public bool Login(string name, string password)
    {
        using FileStream fs = new("data.json", FileMode.Open);
        using StreamReader sr = new(fs);

        string json = sr.ReadToEnd();
        if (json == null)
        {
            return false;
        }
        List<Account> accounts = JsonSerializer.Deserialize<List<Account>>(json);

        foreach (Account item in accounts)
        {

            if (item.Name == name && item.Password == password) 
            {
                return true;
            
            }
            
        }

        return false;

    }

    public void Register(Account user)
    {
        List<Account> accounts = new List<Account>();   
        accounts.Add(user);

        using FileStream fs = new("data.json", FileMode.Open);
        using StreamWriter sr = new(fs);

         string json = JsonSerializer.Serialize(accounts);
         sr.WriteLine(json);
    }
}
