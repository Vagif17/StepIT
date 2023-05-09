#include <iostream>
using namespace std;
int main()
{
    int num{}, count = 1;
    cout << "Enter number : ";
    cin >> num;
    while (count <= 10)
    {
        cout << num * count << endl;
        count = count + 1;
    }
    return 0;
}
