#include <iostream>
using namespace std;
int main() {
    int a = 5,b = 10;
    int *ptrA = &a;
    int *ptrB = &b;
    if (*ptrA > *ptrB)
        cout << "Pointer of A is bigger";
    if (*ptrA < *ptrB)
        cout << "Pointer of B is bigger";
    return 0;
}
