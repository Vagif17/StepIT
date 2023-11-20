﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyMonefy.Models;

class Account
{

    public string Name  { get; set; }
    public string Surname { get; set; }
    public string Email { get; set; }
    public string Password { get; set; }

    public Account() { }


    public override string ToString()
    {
        return $"Name : {Name}\nSurname : {Surname} \nEmail : {Email} \nPassword : {Password}"; 
    }


}
