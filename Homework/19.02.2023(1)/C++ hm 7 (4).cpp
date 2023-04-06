#include <iostream>
using namespace std;
int main()
{
    int arr[10]{-5,1,5,3,-2,10,4,-3,8,9},min = arr[0],max = arr[0],unsigned_res{},even_res = 1,res_between{},first_n{},last_n{},res{};
    for (int i = 0; i < 10; ++i) {
        if (arr[i] < 0)
            unsigned_res += arr[i];
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
        if (i % 2 == 0)
            even_res *= arr[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        res_between *= arr[i];
        if (arr[i] == min)
        {
            res_between = 1;
            res_between *= arr[i];
        }
        if (arr[i] == max)
            break;
    }
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] < 0)
        {
            first_n = arr[i];
            break;
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] < 0)
            last_n = arr[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        res += arr[i];
        if (arr[i] == first_n)
        {
            res = 0;
            res += arr[i];
        }
        if (arr[i] == last_n)
            break;
    }
    cout << "Amount of unsigned numbers = " << unsigned_res << endl;
    cout << "Multiple between min and max numbers =  " << res_between << endl;
    cout << "Multiple of number with even place = " << even_res << endl;
    cout << "Amount between first unsigned and last = " << res << endl;
    return 0;
}
