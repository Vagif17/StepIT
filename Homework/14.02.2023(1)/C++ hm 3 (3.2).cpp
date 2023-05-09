#include <iostream>
using namespace std;
int main()
{
    int late{}, penalty{}, salary{}, want_salary{}, string{};
    cout << "Enter wrote string :";
    cin >> string;
    cout << "Enter want salary :";
    cin >> want_salary;
    salary = (string / 100) * 50;
    while (salary > want_salary)
    {
        salary = salary - 20;
        if (salary <= want_salary)
            break;
        else
        late = late + 3;
    }
    cout << "You can late - " << late << " Times";
    return 0;
}

