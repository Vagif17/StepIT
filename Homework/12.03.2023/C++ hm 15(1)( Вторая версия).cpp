#include <iostream>
using namespace std;
int main() {
    //Это версия мне кажется лучше но не факт
    int* arr1{};
    int num1{};
    int* arr2{};
    int num2{};
    cout << "Enter range of first massive :";
    cin >> num1;
    cout << "Enter range of second massive : ";
    cin >> num2;
    arr1 = new int (num1);
    arr2 = new int (num2);
    cout << "Enter numbers of first massive :" << endl;
    for (int i = 0; i < num1; ++i) {
        cin >> arr1[i];
    }
    cout << endl << "Enter numbers of second massive :" << endl;
    for (int i = 0; i < num2; ++i) {
        cin >> arr2[i];
    }
    int* arr3;
    int index{};
    if (num1 == num2) {
        for (int i = 0; i < num2; ++i) {
            if (arr1[i] != arr2[i]) {
                index += 1;
            }
        }
        arr3 = new int(index);
        for (int i = 0,b = 0; i < num2; ++i) {
            if (arr1[i] != arr2[i])
            {
                arr3[b] = arr1[i];
                b ++;
            }
        }
        cout << "Numbers in first massive which are not in the second : \n";
        for (int i = 0; i < index; ++i) {
            cout  << arr3[i] << " ";
        }
    }

    if (num1 > num2) {
        for (int i = 0; i < num1; ++i) {
            if (arr1[i] != arr2[i]) {
                index += 1;
            }
        }
        arr3 = new int (index);
        for (int i = 0,b = 0; i < num1 ; ++i) {
            if (arr1[i] != arr2[i])
            {
                arr3[b] = arr1[i];
                b ++;
            }
        }
        cout << "Numbers in first massive which are not in the second : \n";
        for (int i = 0; i < index; ++i) {
            cout << arr3[i] << " ";
        }
    }

    if (num1 < num2) {
        for (int i = 0; i < num1; ++i) {
            if (arr1[i] != arr2[i]) {
                index += 1;
            }
        }
        arr3 = new int(index);
        for (int i = 0, b = 0; i < num1; ++i) {
            if (arr1[i] != arr2[i]) {
                arr3[b] = arr1[i];
                b++;
            }
        }
        cout << "Numbers in first massive which are not in the second : \n";
        for (int i = 0; i < index; ++i) {
            cout  << arr3[i] << " ";
        }
    }
    return 0;
}

