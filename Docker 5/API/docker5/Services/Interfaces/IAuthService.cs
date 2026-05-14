namespace docker5.Services.Interfaces;

public interface IAuthService
{
    public bool Register(string username, string password, string confirmPassword);
    public bool Login(string username, string password);
}
