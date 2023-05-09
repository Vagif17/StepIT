#include <iostream>
using namespace std;
int findDays(int d,int m,int y,int d2,int m2,int y2,int diference,int visoco){
    if (y2 % 4 == 0)
        visoco = 1;
    diference = d2 - d;
    if (y < y2) {
        for (int i = 0; i < y2 - y; ++i) {
            if (i % 4 == 0 && i != 0)
                diference += 366;
            else
                diference += 365;
        }
    }
    for (int i = m ; i < m2 ; ++i) {
        if (i == 1)
            diference += 31;
        if (i == 2){
            if (y - y2 % 4 == 0)
                diference += 29;
            else
                diference += 28;
        }
        if (i == 3)
            diference += 31;
        if (i == 4)
            diference += 30;
        if (i == 5)
            diference += 31;
        if (i == 6)
            diference += 30;
        if (i == 7)
            diference += 31;
        if (i == 8)
            diference += 31;
        if (i == 9)
            diference += 30;
        if (i == 10)
            diference += 31;
        if (i == 11)
            diference +=30;
        if (i == 12)
            diference += 31;

    }
    cout << diference << endl;
    if (visoco == 0)
        cout << " It is not a leap year";
    else cout << "It's a leap year";
    return 0;
}
int main() {
    int day1{},month1{},year1{};
    cout << "\t\t\t\tEnter first date (00.00.00 format ((dd,mm,yy))  "; //Первая дата должна быть меньше второй
    cout << "\nEnter day : ";
    cin >> day1;
    cout << "Enter month : ";
    cin >> month1;
    cout << "Enter year : ";
    cin >> year1;
    int day2{},month2{},year2;
    cout << "\t\t\t\tEnter second date ";
    cout << "\nEnter day : ";
    cin >> day2;
    cout << "Enter month : ";
    cin >> month2;
    cout << "Enter year : ";
    cin >> year2;
    findDays(day1,month1,year1,day2,month2,year2,0,0);
    return 0;
}
