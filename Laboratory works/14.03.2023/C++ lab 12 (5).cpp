#include <iostream>
using namespace std;
int main() {
    int arr[5]{5,12,10,7,3},res{};
    int *ptrArr = arr;
    for (int i = 0; i < 5; ++i) {
        res += *(ptrArr + i);
    }
    cout << "Amount of numbers in massive = " <<res;
    return 0;
}