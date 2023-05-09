#include <iostream>
using namespace std;
template <typename T>
T arifm(T arr[], T len, T res = 0,T num = 0) {
    for (size_t i = 0; i < len; i++)
    {
        res += arr[i];
        num++;
    }
    cout << "Airfm = " << res / num << endl;
    return 0;
}
int main()
{
    const int length = 5;
    int arr1[length]{ 5,3,1,6,7 };
    double arr2[length]{ 5.5,6.1,4.3,1.1,1.5 };
    float arr3[length]{ 1.7,1.5,3.6,4.1,5.6 };
    arifm<int>(arr1, length);
    arifm<double>(arr2, length);
    arifm<float>(arr3, length);
    return 0;
}