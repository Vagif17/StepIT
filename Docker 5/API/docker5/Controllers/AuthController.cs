using docker5.Models;
using docker5.Services.Interfaces;
using Microsoft.AspNetCore.Mvc;

namespace docker5.Controllers;

[Route("api/[controller]")]
[ApiController]
public class AuthController : ControllerBase
{
    private readonly IAuthService authService;

    public AuthController(IAuthService _authService)
    {
        authService = _authService; 
    }


    [HttpPost("login")]
    public async Task<IActionResult> Login([FromBody] User request)
    {
        var result = authService.Login(request.Name , request.Password);

        if (!result)
        {
            return Unauthorized();
        }

        return Ok(result);
    }


    [HttpPost("register")]
    public async Task<IActionResult> Register([FromBody] RegisterRequest register)
    {
        try
        {
            var result = authService.Register(register.Name, register.Password, register.ConfirmPassword);
            return Ok(result);
        }
        catch (ArgumentException ex)
        {
            return BadRequest(ex.Message);
        }
    }
}


