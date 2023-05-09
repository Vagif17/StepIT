#include <iostream>
using namespace std;
template <typename T>
T search(T n1, T n2, T array[],const T len1) {
    for (size_t i = 0; i < len1; i++)
    {
        if (n1 > array[i])
            n1 = array[i];
        if (n2 < array[i])
            n2 = array[i];
    }
    cout << "Min number in arrray = " << n1 << endl << "Max number in array = " << n2 << endl;
    return 0;
}

int main()
{
    const int len1 = 10;
    const int len2 = 5;
    const int len3 = 5;
    int arr[len1]{ 5,1,2,3,4,6,10,11,7,8 };
    double arr2[len2]{ 2.1,5.2,3.6,5.1,4.5};
    float arr3[len3]{ 4.5,3.22,3.65,1.8,8.9 };
    int min = arr[0], max = arr[0];
    search<int>(min, max, arr,len1);
    search<double>(min, max, arr2,len2);
    search<float>(min, max, arr3,len3);
    return 0;
}