#include <iostream>
using namespace std;

int bigerr(int n1,int n2){
    if (n1 > n2)
        cout << n1;
    if (n2 > n1)
        cout << n2;
    else
        cout << n1 << '=' << n2;
}

int main()
{
    int n1{},n2{};
    cin >> n1;
    cin >> n2;
    bigerr(n1,n2);
    return 0;
}
