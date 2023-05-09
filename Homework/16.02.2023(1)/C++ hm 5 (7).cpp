#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{},num = 1;
    cout << "Enter first num :";
    cin >> num1;
    cout << "Enter second num :";
    cin >> num2;
    while (num != num1 + num2)
    {
        if (num1 % num == 0 && num2 % num == 0)
            cout << num << endl;
        num = num + 1;
    }
    return 0;
}