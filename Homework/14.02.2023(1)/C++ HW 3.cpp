#include <iostream>
using namespace std;
int main()
{
    char symbol{}, res{};
    int ascii{};
    cout << "Enter symbol :";
    cin >> symbol;
    ascii = int(symbol);
    if (ascii >= 48 && ascii <= 57)
        cout << "Your symbol is - numerical";
    if (ascii >= 65 && ascii <= 90)
        cout << "Your symbol is - letter";
    if (symbol == '!' || symbol == '.' || symbol == ',' || symbol == '?')
        cout << "You symbol is - punctuation mark";
    if (ascii >= 34 && ascii <= 45)
        cout << "Another symbol";
    if (ascii >= 58 && ascii <= 64)
        cout << "Another symbol";
    if (ascii >= 91 && ascii <= 96)
        cout << "Another symbol";
    if (ascii >= 123 && ascii <= 126)
        cout << "Another symbol";
    return 0;
}