#include <iostream>
using namespace std;
void star(int n1){
    cout << '*';
    n1--;
    if (n1 == 0)
        break;
    else
        star(n1);
}
int main() {
    int num{};
    cout <<"Enter number : ";
    cin >> num;
    star(num);
    return 0;
}