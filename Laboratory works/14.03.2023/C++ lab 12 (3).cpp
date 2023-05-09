#include <iostream>
using namespace std;
int main() {
    int n1 = 15,n2 = 17,tmp{};
    int* ptrN1 = &n1;
    int* ptrN2 = &n2;
    int* ptrTmp = &tmp;
    *ptrTmp = *ptrN1;
    *ptrN1 = *ptrN2;
    *ptrN2 = *ptrTmp;
    cout << *ptrN1 << endl;
    cout << *ptrN2;
    return 0;
}
