#include <iostream>
using namespace std;
int main()
{
    int choose{}, c1{}, c2{}, c3{};
    float money{};
    cout << "\t\t\t\t Valute convertor." << endl;
    while (choose <= 0 || choose > 3)
    {

    cout << "\t\t\t Choose valute :\n";
    cout <<
        "\t\t\t\t1 - AZN \n" <<
        "\t\t\t\t2 - EURO \n"
        "\t\t\t\t3 - USD \n \t\t\t\t:";
    cin >> choose;
    if (choose <= 3 && choose > 0)
        break;
    else
    {
        cout << "\t\t\t\t Choose right!\n";
    }
    }
    switch (choose)
    {
    case 1:
        cout << "\t\t\t Enter AZN :";
        cin >> money;
        cout << "\t\t\t What do we convert to ?" << endl;
        cout << "\t\t\t\t1 - USD\n"
            << "\t\t\t\t2 - EURO \n \t\t\t\t:";
        cin >> c1;
        if (c1 > 2 || c1 <= 0)
        {
            while (c1 > 2 || c1 <= 0)
            {
                cout << "\t\t\t Enter right number! :";
                cin >> c1;
            }
        }
        switch (c1)
        {
        case 1:
            money = money * 0.59;
            cout << "\t\t\t\tYou have - " << money << " USD";
            break;
        case 2:
            money = money * 0.55;
            cout << "\t\t\t\tYou have - " << money << " EURO";
            break;
        }
        break;
    case 2:
        cout << "\t\t\t Enter EURO :";
        cin >> money;
        cout << "\t\t\t What do we convert to ?" << endl;
        cout << "\t\t\t\t1 - AZN\n"
            << "\t\t\t\t2 - USD \n \t\t\t\t:";
        cin >> c2;
        if (c2 > 2 || c2 <= 0)
        {
            while (c2 > 2 || c2 <= 0)
            {
                cout << "\t\t\t Enter right choose! :";
                cin >> c2;
            }
        }
        switch (c2)
        {
        case 1:
            money = money * 1.80;
            cout << "\t\t\t You have - " << money << " AZN";
            break;
        case 2:
            money = money * 1.06;
            cout << "\t\t\t You have - " << money << "USD";
            break;
        }
        break;
    case 3:
        cout << "\t\t\t Enter USD :";
        cin >> money;
        cout << "\t\t\t What do we convert to ?" << endl;
        cout << "\t\t\t\t1 - AZN\n"
            << "\t\t\t\t2 - EVRO \n \t\t\t\t:";
        cin >> c3;
        if (c3 > 2 || c3 <= 0)
        {
            while (c3 > 2 || c3 <= 0)
            {
                cout << "\t\t\t Enter right choose! :";
                cin >> c3;
            }
        }
        switch (c3)
        {
        case 1:
            money = money * 1.70;
            cout << "\t\t\t You have - " << money << " AZN";
            break;
        case 2:
            money = money * 0.94;
            cout << "\t\t\t You have - " << money << "EURO";
            break;
        }
        break;
    }
    return 0;
}