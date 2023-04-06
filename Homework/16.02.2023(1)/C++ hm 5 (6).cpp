#include <iostream>
using namespace std;
int main()
{
    int num1{}, num = 1;
    cout << "Enter number :";
    cin >> num1;
    while (num != num1)
    {
        if (num1 % num == 0)
            cout << num << endl;
        num = num + 1;
    }
   return 0;
}