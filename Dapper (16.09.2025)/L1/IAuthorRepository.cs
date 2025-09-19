namespace L1;

public interface IAuthorRepository
{
    Author AddAuthor(Author author);
    void AddAuthors(IEnumerable<Author> authors);
    void RemoveAuthor(int id);
    void RemoveAuthors(int[] authorsIds);
    IEnumerable<Author> GetAuthors();
    Author GetAuthorById(int id);
    void UpdateAuthor(Author author);
}