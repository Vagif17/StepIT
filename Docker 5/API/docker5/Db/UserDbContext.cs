using docker5.Models;
using Microsoft.EntityFrameworkCore;

namespace docker5.Db;

public class UserDbContext : DbContext
{
    public UserDbContext(DbContextOptions<UserDbContext> options)
        : base(options)
    {
    }

    public DbSet<User> Users { get; set; }
}
