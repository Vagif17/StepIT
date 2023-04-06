#include <iostream>
using namespace std;
int main()
{
	int choose{};
	float radius{}, diameter{};
	cout <<
		"Computing the Volume of a Sphere\n"
		//Это вариант с условием,для выбора через что находить объём
		/* 	"Choose"
			"\n 1.Find with radius."
			"\n 2.Find with diameter.\n:";
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Enter radius -> ";
			cin >> radius;
			cout << "The Volume of a sphere = " << (radius * radius * radius) * 3.14 * 4 / 3 << "cm^3";
		case 2:
			cout << "Enter diameter -> ";
			cin >> diameter;
			cout << "The volume of a sphere = " << diameter / 2 * diameter / 2 * diameter / 2 * 3.14 * 4 / 3 << "cm^3";

		}
		*/;
	// Вариант через радиус,без условий
	cout << "Enter radius -> ";
	cin >> radius;
	cout << "The volume of a sphere = " << (radius * radius * radius) * 3.14 * 4 / 3 << "cm^3";
	/* Вариант через диаметр без условий
	 cout << "\nEnter diameter -> ";
	  cin >> diameter;
	cout << "The volume of a sphere = " << diameter / 2 * diameter / 2 * diameter / 2 * 3.14 * 4 / 3 << "cm^3";
	*/;
	return 0;

}