#include <iostream>
using namespace std;
int main()
{
    int salary{}, want_salary{}, count_late{}, count_string{}, penalty{};
    cout << "Enter want salary -> ";
    cin >> want_salary;
    cout << "Enter count of late -> ";
    cin >> count_late;
    if (count_late % 3 >= 0)
    {
        penalty = penalty + (20 * (count_late / 3));
        salary = salary - penalty;
        cout << "Calculating..." << endl;
    }
    while (salary != want_salary)
    {
        count_string = count_string + 100;
        salary = salary + 50;
    }
    cout << "You must write : " << count_string  << " Str." << endl;
    return 0;
}
