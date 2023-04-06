#include <iostream>
using namespace std;
int main() {
    int n1{},n2{},choose{};
    cout << " Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Choose act :" << endl << " 1. +\n 2. -\n 3. - *\n 4. - /" << endl;
    cin >> choose;
    int* ptrN1 = &n1;
    int* ptrN2 = &n2;
    int* ptrChoose = &choose;
    switch (choose) {
        case 1 :
        {
            cout << n1 << "+" << n2 << "=" << *ptrN1 + *ptrN2;
            break;
        }
        case 2:
        {
            cout << n1 << "-" << n2 << "=" << *ptrN1 - *ptrN2;
            break;
        }
        case 3:
        {
            cout << n1 << "*" << n2 << "=" << *ptrN1 * *ptrN2;
            break;
        }
        case 4:
        {
            cout << n1 << "/" << n2 << "=" << *ptrN1 / *ptrN2;
            break;
        }
    }
    return 0;
}
