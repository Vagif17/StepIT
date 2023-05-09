#include <iostream>
using namespace std;
int main()
{
	const int length = 12;
	int array[length], salary{}, min{}, max{}, month{}, max_month{};
	for (size_t i = 0; i < length; i++)
	{
		cout << "Enter salary per month :";
		cin >> array[i];
		min = array[i];
		max = array[i];
	}
	for (size_t i = 0, m = 1; i < length; i++,m++)
	{
		if (min > array[i])
		{
			min = array[i];
			month = m;
		}
		if (max < array[i])
		{
			max = array[i];
			max_month = m;
		}
	}
	cout << "Minimal salary in 12 month - " << min << " in " << month << " Month" << endl;
	cout << "Max salary in 12 month - " << max << " in " << max_month << " Month" << endl;
	return 0;
}
