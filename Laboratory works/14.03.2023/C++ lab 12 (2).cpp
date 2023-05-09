#include <iostream>
using namespace std;
int main() {
    int n{};
    cout << "Enter you number : ";
    cin >> n;
    int* ptrN = &n;
    if (*ptrN > 0)
        cout << "Positive number .";
    if (*ptrN < 0)
        cout << "Negative number.";
    return 0;
}
