#include <iostream>
using namespace std;
int findN(int number1,int number2,int bigN,int tmp,int finded){
    if (tmp > 1 && number1 % tmp == 0 && number2 % tmp == 0 )
        finded = tmp;
    tmp += 1;
    if (tmp == bigN){
        cout << "Maximum divisor - " << finded;
        return 0;
    }
    findN(number1,number2,bigN,tmp,finded);
}
int main() {
    int n1{}, n2{}, biggerN{};
    cout << " Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    if (n1 > n2)
        biggerN = n1;
    if (n1 < n2)
        biggerN = n2;
    if (n1 == n2)
        biggerN = 1;
    findN(n1, n2, biggerN,1,0);
    return 0;
}