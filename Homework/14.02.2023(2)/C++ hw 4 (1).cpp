#include <iostream>
using namespace std;
int main()
{
    int num{}, res{};
    cout << "Enter number :";
    cin >> num;
    if (num > 500)
        while (num > 500)
        {
            if (num > 500)
            {
                cout << "Enter correct number :";
                cin >> num;
            }
        }
    if (num <= 500)
        while (num <= 500)
        {
            res = res + num;
            num = num + 1;
        }
    cout << res;
    return 0;
}