#include <iostream>
using namespace std;
int main() {
    int count{}, n2 = 1,res{},count_zero{},arifm{},choose{};
    cout << " \t\t\t Arifm,count,amount find program " << endl;
    int num{};
    cout << "Enter number : ";
    cin >> num;
    int n1 = num % 10;
    count += 1;
    res += n1;
    if (n1 == 0)
        count_zero += 1;
    int digit = 100;
    int digit2 = 10;
    while (digit2 < num)
    {
        n2 = num % digit / digit2;
        digit *= 10;
        digit2 *= 10;
        count += 1;
        res += n2;
        if (n2 == 0)
            count_zero += 1;
    }
    arifm = res / count;
    cout << "What do you want to do : " << endl;
    cout << "1.Find Arifm." << endl;
    cout << "2.Find count of num." << endl;
    cout << "3.Find count of 0." << endl;
    cout << "4.Find amount of numbers" << endl << ':';
    cin >> choose;
    while (choose > 4 || choose < 1)
    {
        cout << "Enter right choose :";
        cin >> choose;
    }
    switch (choose)
    {
        case 1:
        {
            cout << "Arifm = " << arifm;
            break;
        }
        case 2:
        {
            cout << "Count of num = " << count;
            break;
        }
        case 3:
        {
            cout << "Count of 0 = " << count_zero;
            break;
        }
        case 4:
        {
            cout << "Amount of numbers = " << res;
            break;
        }
    }
    return 0;
}