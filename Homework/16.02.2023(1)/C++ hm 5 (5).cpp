#include <iostream>
using namespace std;
int main()
{
    int num{}, n = 1, n1{}, digit = 10, digit2 = 100, res{}, res2{};
    cout << "Enter number :";
    cin >> num;
    n1 = num % digit;
    res = res + n1; // Для себя,что бы было легче каждое число найти.
    res2 = res2 + n1;
    while (n != 0)
    {
        n = num % digit2 / digit;
        res2 = res2 + n;
        res = res + n * digit;
        digit = digit * 10;
        digit2 = digit2 * 10;
    }
    res2 = res2 * res2 * res2;
    cout << res2 << endl;
    res = res * res;
    cout << res << endl;
    if (res2 == res)
        cout << "Right number!";
    else
        cout << "Wrong number!";
    return 0;
}
