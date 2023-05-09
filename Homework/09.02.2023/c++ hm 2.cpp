#include <iostream>
using namespace std;
int main()
{	
	setlocale(LC_ALL, "RU");
	int seconds = 0;
	int minute = 0;
	int hours = 0;
	cout << "Введите секунды :";
	cin >> seconds;
	if (seconds >= 60)
		minute = seconds / 60;
	if (minute >= 60)
		hours = minute / 60;
	cout 
		<< "\nСекунды :" << seconds
		<< "\nМинуты :" << minute 
		<< "\nЧасы :" << hours;
	return 0;
}