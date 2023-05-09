#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int days{};
    int weeks{};
    cout << "Enter days :";
    cin >> days;
    if (days >= 7)
        weeks = days / 7;
    days = days - weeks * 7;
    cout << days << " - Days \n" << weeks << " - Weeks";
    return 0;
}
