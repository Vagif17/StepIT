using L1;
using Microsoft.Data.SqlClient;

string connectiongString = @"Server=localhost;Database=LESSON1;Integrated Security=True;Trust Server Certificate=True;";

IAuthorRepository repository = new AuthorRepository(new SqlConnection(),connectiongString);

#region AddData
// Author author = new Author(){FirstName = "Ben",LastName = "Albahari"};
// author = repository.AddAuthor(author);
// Console.WriteLine(author.FirstName);
#endregion

#region Read Datas
// var authors = repository.GetAuthors().ToList();
// authors.ForEach(Console.WriteLine);
#endregion

#region Read Data
// author = repository.GetAuthorById(2);
// Console.WriteLine(author);
#endregion

#region Remove Data
// repository.RemoveAuthor(1);
// var authors = repository.GetAuthors().ToList();
// authors.ForEach(Console.WriteLine);
#endregion

#region Update Data
// var updatedAuthor = new Author() { FirstName = "Albert", LastName = "Einstein", Id = 2 };
// repository.UpdateAuthor(updatedAuthor);
// var authors = repository.GetAuthors().ToList();
// authors.ForEach(Console.WriteLine);
#endregion