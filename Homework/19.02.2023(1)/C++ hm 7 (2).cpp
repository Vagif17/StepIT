#include <iostream>
using namespace std;
int main()
{
    int arr[]{15,2,16,7,6,3,12,9,1,11},range{},res{};
    cout << "Enter range : ";
    cin >> range;
    for (int i = 0; i < range; ++i)
    {
        res = res + arr[i];
    }
    cout <<"Amount of number before " << range <<  " number in range = " <<res;
    return 0;
}
