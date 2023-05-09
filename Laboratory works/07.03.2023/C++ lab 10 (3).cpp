#include <iostream>
using namespace std;
int amount(int start,int end,int res)
{
    start ++;
    if (start != end)
        res += start;
    if (start != end)
        amount(start,end,res);
    else
        return res;
}
int main() {
    int n1{},n2{};
    cout << "Enter start of range : ";
    cin >> n1;
    cout << "Enter end of range : ";
    cin >> n2;
    cout << amount(n1,n2,0);
    return 0;
}