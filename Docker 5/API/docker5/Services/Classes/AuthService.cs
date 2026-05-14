using docker5.Db;
using docker5.Models;
using docker5.Services.Interfaces;

namespace docker5.Services.Classes;

public class AuthService : IAuthService
{
    private readonly UserDbContext userDbContext;

    public AuthService(UserDbContext _userDbContext)
    {
        userDbContext = _userDbContext;
    }

    public bool Login(string username, string password)
    {
        if (string.IsNullOrEmpty(username) || string.IsNullOrEmpty(password))
        {
            throw new ArgumentException("Username and password must be provided.");
        }

        if (userDbContext.Users.Any(u => u.Name == username && u.Password == password))
        {
            return true;
        }

        return false;
    }

    public bool Register(string username, string password, string confirmPassword)
    {
        if (string.IsNullOrEmpty(username) || string.IsNullOrEmpty(password) || string.IsNullOrEmpty(confirmPassword))
        {
            throw new ArgumentException("All fields must be filled out.");
        }

        if (password != confirmPassword)
        {
            throw new ArgumentException("Passwords do not match.");
        }

        if (userDbContext.Users.Any(u => u.Name == username))
        {
            throw new ArgumentException("User already exists.");
        }

        userDbContext.Users.Add(new User
        {
            Name = username,
            Password = password
        });

        userDbContext.SaveChanges();

        return true;
    }
}
