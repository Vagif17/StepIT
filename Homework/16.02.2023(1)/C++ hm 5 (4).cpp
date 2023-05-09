#include <iostream>
using namespace std;
int main()
{
    int num{}, num2 = 1,count = 1;
    cout << "Enter number :";
    cin >> num;
    while (count != num)
    {
        if (num % (num2 * num2) == 0 && num % (num2 * num2 * num2) > 0)
            cout << num2 << endl;
        count = count + 1;
        num2 = num2 + 1;
    }
    return 0;
}
