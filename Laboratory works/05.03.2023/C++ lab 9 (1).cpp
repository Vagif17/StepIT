#include <iostream>
using namespace std;
int findMinMaX(int num)
{
    int* length;
    length = new int(num);
    int max{}, min{};
    int minIndex{}, maxIndex{};
    cout << "Enter numbers :" << endl;
    for (size_t i = 0; i < num; i++)
    {
        cin >> length[i];
    }
    for (size_t i = 0; i < num; i++)
    {
        if (min > length[i])
        {
            min = length[i];
            minIndex = i;
        }
        if (max < length[i])
        {
            max = length[i];
            maxIndex = i;
        }
    }
    cout << "Max number = " << max << " With index = " << maxIndex << endl;
    cout << "Min number = " << min << " With index = " << minIndex;
    return 0;
}
int main()
{
    int len1{};
    cout << "Enter lenght :" << endl;
    cin >> len1;
    findMinMaX(len1);
    return 0;
}