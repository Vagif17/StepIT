#include <iostream>
using namespace std;
int main()
{
	int money{};
	int percent{};
	cout << "Enter money : ";
	cin >> money;
	cout << "Enter bank's percent : ";
	cin >> percent;
	float payouts = money / 100 * percent;
	cout << "Annual payments = " << payouts;
	float month_pay = payouts / 12;
	cout << "\nMonth payouts = " << month_pay;
	return 0;
}

