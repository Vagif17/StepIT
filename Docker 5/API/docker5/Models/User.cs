using System.ComponentModel.DataAnnotations;

namespace docker5.Models;

public sealed class User
{
    [Key]
    public int Id { get; set; }
    public string Name { get; set; }
    public string Password { get; set; }
}


public sealed class RegisterRequest
{
    public string Name { get; set; }
    public string Password { get; set; }
    public string ConfirmPassword { get; set; }
}