#include <iostream>
using namespace std;
int main()
{
    int d1{}, d2{}, num{};
    cout << "Enter start of range : ";
    cin >> d1;
    cout << "Enter end of range : ";
    cin >> d2;
    cout << "Enter num : ";
    cin >> num;
    while (true)
    {
        if (num > d1 && num < d2)
        {
            cout << "Right number";
            break;
        }
        if (num < d1 || num > d2)
        {
            cout << "Wrong number,try again :";
            cin >> num;
        }

    }
    return 0;
}
