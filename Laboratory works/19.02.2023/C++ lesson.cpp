#include <iostream>
using namespace std;
int main()
{
	const int length = 6;
	int salary[length], res{};
	for (size_t i = 0; i < length; i++)
	{
		cout << "Enter salary per month : " << endl;
		cin >> salary[i];
	}
	for (size_t i = 0; i < length; i++)
	{
		res = res + salary[i];
	}
	cout <<"Your monht for 6 week = " << res;
	return 0;
}
