#include <iostream>
using namespace std;
int main()
{
	float length{}, height{}, width{};
	cout << "Calculating the volume of a box";
	cout << "\nEnter length :";
	cin >> length;
	cout << "Enter height :";
	cin >> height;
	cout << "Enter width :";
	cin >> width;
	cout << "Size of box = " << length * height * width;
	return 0;
}
