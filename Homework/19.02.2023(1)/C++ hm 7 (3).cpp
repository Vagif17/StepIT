#include <iostream>
using namespace std;
int main()
{
    int arr [12]{},min{},max{},s_range{},e_range{},minmonth{},maxmonth{};
    cout << "Enter start of range : ";
    cin >> s_range;
    cout << "Enter end of range : ";
    cin >> e_range;
    s_range = s_range - 1;
    e_range = e_range - 1;
    max = s_range;
    minmonth = s_range;
    maxmonth = s_range;
    for (int i = 0; i < 12; ++i)
    {
        if (i == 0)
            cout << "Enter numbers : " << endl;
        cin >> arr[i];
    }
    min = arr[s_range];
    for (int i = s_range; i <e_range + 1 ; ++i)
    {
        if(min > arr[i])
        {
           min = arr[i];
           minmonth = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            maxmonth = i;
        }
    }
    cout << "Min salary in your range is " << min << " was in " << minmonth + 1 << " month" << endl;
    cout << "Max salary in your range is " << max << " was in " << maxmonth + 1 << " month";
    return 0;
}
