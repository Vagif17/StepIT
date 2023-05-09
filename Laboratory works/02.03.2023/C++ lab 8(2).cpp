#include <iostream>
using namespace std;
int fact(int num){
    int res = 1;
    for (int i = 1; i <= num; ++i) {
        res *= i;
    }
    cout << res;
}
int main() {
    fact(3);
    return 0;
}