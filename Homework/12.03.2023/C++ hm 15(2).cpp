#include <iostream>
using namespace std;
int main() {
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
    int ind1{};
    int ind2{};
    for (int i = 0; i < num1 + 1; ++i) {
        if (choose == 2){
            ind1 ++;
        }
        for (int j = 0; j < num1; ++j) {
            if (arr1[i] == arr2[j])
            {
                choose = 0;
                break;
            } else choose = 2;
        }
    }
    choose = 0;
    for (int i = 0; i < num1; ++i) {
        if (choose == 2)
        {
            ind2 ++;
        }
        for (int j = 0; j < num1; ++j) {
            if (arr2[i] == arr1[j])
            {
                choose = 0;
                break;
            } else choose = 2;
        }
    }
    index = ind1 + ind2;
    arr3 = new int (index + 1);
    int b = 0;
    choose = 0;
    for (int i = 0; i < num1 + 1; ++i) {
        if (choose == 2){
            arr3[b] = number;
            b++;
        }
        for (int j = 0; j < num1; ++j) {
            if (arr1[i] == arr2[j])
            {
                choose = 0;
                break;
            } else choose = 2,number = arr1[i];
        }
    }
    number = 0;
    choose = 0;
    if (index == 0)
    {
        cout << "All numbers in the first array are in the second" << endl;
    }
    else {
        for (int i = 0; i < num1 + 1; ++i) {
            if (choose == 2) {
                arr3[b] = number;
                b++;
            }
            for (int j = 0; j < num1; ++j) {
                if (arr2[i] == arr1[j]) {
                    choose = 0;
                    break;
                } else choose = 2, number = arr2[i];
            }
        }
        cout << "All digits of the first and second array that are not common : ";
        for (int i = 0; i < index + 1; ++i) {
            cout << arr3[i] << " ";
        }
    }
    return 0;
}