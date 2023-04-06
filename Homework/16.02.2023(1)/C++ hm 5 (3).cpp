#include <iostream>
using namespace std;
int main()
{
    int n = 1, n2{}, num{}, digit = 10, digit2 = 100, res{},count = 1;
    cout << "Enter number :" << endl;
    cin >> num;
    n2 = num % 10;
    if (n2 != 3 && n2 != 6)
        res = res + n2;
    while (n != 0)
    {
        n = num % digit2 / digit;
        digit = digit * 10;
        digit2 = digit2 * 10;
        if (n != 3 && n != 6)
            res = res + n * digit;
    }  
    cout << res / 10;
    return 0;
}
