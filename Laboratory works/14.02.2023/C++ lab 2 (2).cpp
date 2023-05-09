#include <iostream>
using namespace std;
int main()
{
	int num{};
	cout << "Enter number : ";
	cin >> num;
	float numb = num;
	if (num % 2 == 0)
		cout << num * 3;
	else
		cout << numb / 2;
	return 0;
}
