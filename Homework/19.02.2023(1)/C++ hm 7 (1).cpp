#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int arr[5]{5,8,3,4,7}, min = arr[0], max = arr[0];
    for (int i = 0; i < 5; ++i)
    {
        if (i == 0)
            cout << "Enter numbers : " << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    cout << min << endl;
    cout << max << endl;
    return 0;
}
