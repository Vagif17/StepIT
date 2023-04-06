#include <iostream>
using namespace std;
int main()
{
	const int length = 5;
	int a[length], res{};
	for (size_t i = 0; i < length; i++)
	{
		cout << "Enter sides : " ;
		cin >> a[i];
	}
	for (size_t i = 0; i < length; i++)
	{
		res = res + a[i];
	}
	cout << "Perimetr of pentagon = " << res;
	return 0;
}

