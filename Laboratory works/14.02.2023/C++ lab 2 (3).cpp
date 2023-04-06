#include <iostream>
using namespace std;
int main()
{
	int num1{}, num2{}, choose{};
	cout << "Enter numbers --> ";
	cout << "\nNum 1 = ";
	cin >> num1;
	cout << "Num 2 = ";
	cin >> num2;
	cout << "Choose : ";
	cout << "\n 1. + ";
	cout << "\n 2. - ";
	cout << "\n 3. * ";
	cout << "\n 4. / " << endl << "::";
	cin >> choose;
	switch (choose)
	{
	case 1:
		cout << num1 + num2;
		break;
	case 2:
		cout << num1 - num2;
		break;
	case 3:
		cout << num1 * num2;
		break;
	case 4:
		cout << num1 / num2;
		break;
	default:
		cout << "\nError:: Choose right variant";
		break;
	}
	return 0;
}