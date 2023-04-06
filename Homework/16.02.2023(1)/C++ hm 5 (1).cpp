#include <iostream>
using namespace std;
int main()
{
    int n1{}, n2{}, n3{}, num = 100, count{};
    while (num != 1000)
    {
        n1 = num / 100;
        n2 = (num % 100) / 10;
        n3 = (num % 100) % 10;
        num = num + 1;
        if (n1 == n2 || n1 == n3 || n2 == n3)
            count = count + 1;
    }
        cout << "Numberû with 2 same digits - " << count;
    return 0;
}