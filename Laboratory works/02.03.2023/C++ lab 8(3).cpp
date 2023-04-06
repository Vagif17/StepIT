#include <iostream>
using namespace std;
int primeNumber(int n){
    int prime = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0 && i != n && i != 1) {
            cout << "Number is not prime";
            prime = 0;
            break;
        }
        else
            prime = 1;
            continue;
    }
    if (prime == 1)
        cout << "Number is prime.";
}
int main() {
    int num{};
    cout << "Enter number :";
    cin >> num;
    primeNumber(num);
    return 0;
}
