#include <iostream>
using namespace std;
int findDegree(int n1,int n2,int res = 5){
    for (int i = 1; i < n2; ++i) {
         res *= n1;
    }
    cout <<"Number " << n1 << " in "  << n2 << " degree = " << res;
    return 0;
}
int main() {
    int num{},degree{};
    cout << "Enter number :";
    cin >> num;
    cout << "Enter degree :";
    cin >> degree;
    findDegree(num,degree);
    return 0;
}
