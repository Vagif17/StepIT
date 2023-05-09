#include <iostream>
using namespace std;
int main() {
    // Ёто перва€ верси€,втора€ на мой личный взг€лд получше будет,но не факт поэтому € скинул обе.
    int *arr1{};
    int num1{};
    int *arr2{};
    int *arr3{};
    cout << "Enter range of massives :";
    cin >> num1;
    arr1 = new int(num1);
    arr2 = new int(num1);
    cout << "Enter numbers of first massive :" << endl;
    for (int i = 0; i < num1; ++i) {
        cin >> arr1[i];
    }
    cout << endl << "Enter numbers of second massive :" << endl;
    for (int i = 0; i < num1; ++i) {
        cin >> arr2[i];
    }
    int choose{};
    int index{};
    int number{};
    for (int i = 0; i < num1 + 1; ++i) {
        if (choose == 2)
        {
            index++;
        }
        for (int j = 0; j < num1 + 1; ++j) {
            if (arr1[i] == arr2[j])
            {
                choose = 0;
                break;
            }else choose = 2;
        }
    }
    arr3 = new int (index);
    for (int i = 0,b = 0; i < num1 + 1; ++i) {
        if (choose == 2)
        {
            arr3[b] = number;
            b++;
        }
        for (int j = 0; j < num1; ++j) {
            if (arr1[i] == arr2[j])
            {
                choose = 0;
                break;
            }else choose = 2,number = arr1[i];
        }
    }
    cout << "Amount of numbers = " << index << endl;
    cout << "Numbers of massive 1 not in the second :";
    if (index == 0)
    {
        cout << endl << "All numbers in the first array are in the second ";
    }
    for (int i = 0; i < index; ++i) {
        cout << arr3[i] << ' ';
    }
    return 0;
}