#include <iostream>
using namespace std;
int main()
{
    int late{}, penalty{}, salary{}, string{};
    cout << "Enter wrote string :";
    cin >> string;
    cout << "Enter late days :";
    cin >> late;
    salary = (string / 100) * 50;
    if (late % 3 >= 0)
    {
        penalty = penalty + (20 * (late / 3));
        salary = salary - penalty;
        cout << "Calculating..." << endl;
    }
    if (salary > 0)
        cout << "Your salary : " << salary;
    if (salary < 0)
        cout << "You won't get paid";
    return 0;
} 
