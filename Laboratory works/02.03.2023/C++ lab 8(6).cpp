#include <iostream>
using namespace std;
int num(int num){
   if (num >= 0)
       cout << "True";
   else
       cout << "False";
}

int main() {
    int nu{};
    cin >> nu;
    num(nu);
    return 0;
}
