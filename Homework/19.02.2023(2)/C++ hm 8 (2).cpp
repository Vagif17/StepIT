#include <iostream>
using namespace std;
int main()
{
    int num{},n2{};
    cout << "Enter number :" ;
    cin >> num;
    int n = num % 10;
    int n_count = 1;
    int n_res = 1;
    int digit = 100;
    int digit2 = 10;
    while (n_count != n)
    {
      n_count += 1;
      n_res *= n_count;
    }
    digit = 100;
    digit2 = 10;
    n_count = 1;
    cout << "Arifm of numbers in your number :" << endl;
    while (digit2 < num) {
        cout << n_res << endl;
        n_count = 1;
        n_res = 1;
        n2 = num % digit / digit2;
        digit *= 10;
        digit2 *= 10;
        while (n_count <= n2)
        {
            n_res *= n_count;
            n_count += 1;
        }
    }
    return 0;
}
