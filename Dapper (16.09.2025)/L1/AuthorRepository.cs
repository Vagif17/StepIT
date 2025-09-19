using System.Data;
using Dapper;

namespace L1;

public class AuthorRepository : IAuthorRepository
{
    IDbConnection _db;

    public AuthorRepository(IDbConnection db,string connectionString)
    {
        _db = db;
        _db.ConnectionString = connectionString;
    }
    
    public Author AddAuthor(Author author)
    {
        var sqlQuery = @"INSERT INTO Author (FirstName, LastName)  
                         VALUES (@FirstName, @LastName)
                         SELECT CAST(SCOPE_IDENTITY() as int)";
        
        var id = _db.Query<int>(sqlQuery, new
        {
            @FirstName = author.FirstName,
            @LastName = author.LastName
        }).FirstOrDefault();
        
        
        author.Id = id;
        return author;
    }

    public void AddAuthors(IEnumerable<Author> authors)
    {
        foreach (var author in authors)
        {
            AddAuthor(author);
        }
    }

    public void RemoveAuthor(int id)
    {
        var sqlQuery = @"DELETE FROM Author WHERE Id = @Id";
        _db.Execute(sqlQuery, new { @Id = id });
    }

    public void RemoveAuthors(int[] authorsIds)
    {
        foreach (var AuthorId in authorsIds)
        {
            RemoveAuthor(AuthorId);
        }
    }

    public IEnumerable<Author> GetAuthors()
    {
        var sqlQuery = @"SELECT * FROM Author";
        
        return _db.Query<Author>(sqlQuery);
    }

    public Author GetAuthorById(int id)
    {
        var sqlQuery =  @"SELECT * FROM Author WHERE Id = @Id";
        
        return _db.QueryFirstOrDefault<Author>(sqlQuery, new { @id = id });
    }

    public void UpdateAuthor(Author author)
    {
        var sqlQuery = @"UPDATE Author SET  FirstName = @FirstName, LastName = @LastName WHERE Id = @Id ";
        _db.Execute(sqlQuery, new { @FirstName = author.FirstName, @LastName = author.LastName, @Id = author.Id });
        return;
    }
}