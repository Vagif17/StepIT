#include <iostream>
using namespace std;
int main()
{
	int mark1{}, mark2{}, mark3{}, mark4{}, mark5{},res{};
	cout << "Enter marks -> " << endl;
	cout << "First mark = ";
	cin >> mark1;
	cout << "Second mark = ";
	cin >> mark2;
	cout << "Third mark = ";
	cin >> mark3;
	cout << "Fourth mark = ";
	cin >> mark4;
	cout << "Fifth mark = ";
	cin >> mark5;
	res = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
	if (res >= 4)
		cout << "Gets admission";
	if (res < 4)
		cout << "Did not pass";
	cout << "\nAverage score = " << res;
	return 0;
}
