#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    float number{};
    cout << "Введите сумму денег :";
    cin >> number;
    int dollars = number;
    float cent1 = number - dollars;
    float cent2 = cent1 * 100;
    int cent = cent2;
    cout << dollars << " Долларов и  " << cent << " Центов";
    return 0;
}

