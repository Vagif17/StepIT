#include <iostream>
using namespace std;
int findPerfect (int n1,int res = 0){
    for (int i = 1; i < n1; ++i) {
        if (n1 % i == 0)
            res += i;
    }
    if ( res == n1)
        cout << "Your number is perfect !";
    else
        cout << "Your number is not perfect !";
}
int main() {
    int num{};
    cout << "Enter number :";
    cin >> num;
    findPerfect(num);
    return 0;
}
