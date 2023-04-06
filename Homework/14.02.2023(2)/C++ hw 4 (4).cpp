#include <iostream>
using namespace std;
int main()
{
    size_t num{}, res = 1;
    cout << "Enter number :";
    cin >> num;
    while (num <= 20)
    {
        res = res * num;
        num = num + 1;
    }
    cout << res;
    return 0;
}
