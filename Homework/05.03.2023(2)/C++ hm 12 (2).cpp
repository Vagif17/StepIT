#include <iostream>
using namespace std;
int amount (int n1,int n2, int res = 0){
    for (int i = n1 + 1; i != n2; ++i) {
        res += i;
    }
    cout <<"Amount of numbers between " << n1 << " and " << n2 << " =" << res; ;
}
int main() {
    int num{},num2{};
    cout << " Enter start of range : ";
    cin >> num;
    cout << "Enter end of range : ";
    cin >> num2;
    amount(num,num2);
    return 0;
}
