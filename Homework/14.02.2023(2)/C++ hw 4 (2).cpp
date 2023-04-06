#include <iostream>
using namespace std;
int main()
{
    int num{}, degree{}, res = 1, count{};
    cout << "Enter degree -> ";
    cin >> degree;
    cout << "Enter number -> ";
    cin >> num;
    while (count != degree)
    {
        res = res * num;
        count = count + 1;
    }
    cout << res;
    return 0;
}
