#include <iostream>
using namespace std;
int maxNumber (int arr1[],int arr2[],int len)
{
        int maxNumber1 = arr1[0];
        int maxNumber2 = arr2[0];
        for (int i = 0; i < len; ++i) {
            if (maxNumber1 < arr1[i]) {
                maxNumber1 = arr1[i];
            }
            if (maxNumber2 < arr2[i]) {
                maxNumber2 = arr2[i];
            }
        }
        if (maxNumber2 > maxNumber1) {
            cout << "Maximum number in arrays = " << maxNumber2;
        }
        if (maxNumber2 < maxNumber1) {
            cout << "Maximum number in arrays =  " << maxNumber1;
        }
        if (maxNumber1 == maxNumber2) {
            cout << "Maximum number in arrays = " << maxNumber2;
        }
        return 0;
}

int minNumber (int arr1[],int arr2[],int len)
{
    int minNumber1 = arr1[0];
    int minNumber2 = arr2[0];
    for (int i = 0; i < len; ++i) {
        if (minNumber1 > arr1[i]) {
            minNumber1 = arr1[i];
        }
        if (minNumber2 > arr2[i]) {
            minNumber2 = arr2[i];
        }
    }
    if (minNumber2 < minNumber1) {
        cout << "Minimum number in arrays = " << minNumber2;
    }
    if (minNumber2 > minNumber1) {
        cout << "Minimum number in arrays =  " << minNumber1;
    }
    if (minNumber1 == minNumber2) {
        cout << "Minumyn number in arrays = " << minNumber2;
    }
    return 0;
}

int average(int arr1[],int arr2[],int len){
    int arifm1{}, arifm2{};
    int amount1{}, amount2{};
    for (int i = 0; i < len; ++i) {
        amount1 += arr1[i];
        amount2 += arr2[i];
    }
    arifm1 = amount1 / len;
    arifm2 = amount2 / len;
    cout << "Arim of first array = " << arifm1 << endl << "Arifm of second array = " << arifm2;
    return 0;
}
int main() {
    int (*arr[]) (int[],int[],int) = {maxNumber, minNumber, average};
    int choose{};
    const int lens = 5;
    int array1[lens]{2,6,1,8,9};
    int array2[lens]{9,5,7,3,0};
    cout << "Choose :" << endl << "1. Max \n2. Min \n3. Avg \n :";
    cin >> choose;
    arr[choose - 1](array1,array2,lens);
    return 0;
}
