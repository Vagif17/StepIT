#include <iostream>
using namespace std;
int isHappy(int n1,int reverse = 0,int original = 0,int digit = 100,int digit2 = 10){
    reverse += n1 % 10;
    for (int i = 0; i < 2; ++i) {
        reverse += n1 % digit / digit2 * digit2;
        digit *= 10;
        digit2 *= 10;
    }
    digit = 100000;
    original += n1 / 1000;
    if (original == reverse)
        cout << "Your number is happy number !";
    else
        cout << "Your number is not happy number !";
    return 0;
}
int main() {
    int num{};
    cout << "Enter number :";
    cin >> num;
    isHappy(num);
    return 0;
}
