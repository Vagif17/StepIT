#include <iostream>
using namespace std;
int main()
{
	//Лучший вариант который получился.
	int year{}, days = 366;
	cout << "Enter year : ";
	cin >> year;
	int show = days - year % 4 % 2;
	cout << show;
	return 0;
}