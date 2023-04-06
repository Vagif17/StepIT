#include <iostream>
using namespace std;
template <typename T>
T factorial(T array[], T len, T res = 1,T resFactorial = 0) {
    int FinalArray[5];
    for (size_t i = 0; i < len; i++)
    {
        FinalArray[i] = array[i];
    }
    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < FinalArray[i]; j++)
        {
            if (j > 0) {
                res *= j;
            }
        }
        res *= FinalArray[i];
        resFactorial += res;
        res = 1;
    }
    cout <<"The sum of the factorial of the elements of the array = "<<  resFactorial <<endl;
    return 0;
}
int main()
{
    const int length = 5;
    int arr1[length]{ 5,3,1,6,4 };
    float arr2[length]{ 4.1,5.2,5.3,3.5,1.2 };
    double arr3[length]{ 3.2,5.1,6.1,6.7,7.8 };
    factorial<int>(arr1, length);
    factorial <float>(arr2, length);
    factorial<double>(arr3, length);
    return 0;
}
