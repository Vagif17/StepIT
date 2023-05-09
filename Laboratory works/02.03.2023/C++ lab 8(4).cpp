#include <iostream>
using namespace std;
int cube(int num){
    cout <<  num * num * num;
}

int main() {
    int n1{};
    cin >> n1;
    cube(n1);
    return 0;
}
