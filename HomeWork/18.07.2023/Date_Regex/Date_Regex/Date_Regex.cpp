#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main()
{
    string current_date{};

    regex date_regex("^([0-3][1-9]).([0-1][0-9]).([0-9]{4})");

    cout << "Enter date : ";
    cin >> current_date;
    if (!regex_match(current_date,date_regex))
    {
        while (!regex_match(current_date, date_regex));
        {
            system("cls");
            cout << "Wrong date!Try again : ";
            cin >> current_date;
        }
    }
    cout << "Date : " << current_date;
    return 0;
}
