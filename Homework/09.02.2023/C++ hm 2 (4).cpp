#include <iostream>
using namespace std;
int main()
{
	int distance{};
	float time{};
	cout << "Calculating running speed.\n";
	cout << "Enter the length of distance (meters) = ";
	cin >> distance;
	cout << "Enter time (min.sec) = ";
	cin >> time;
	cout << "Distance = " << distance;
	int minute = time;
	float second1 = time - minute;
	int fin_second = second1 * 100;
	int fin_time = fin_second + 60 * minute;
	cout << "\nTime : " << minute << " - min " << fin_second << " - sec = " << fin_time;
	float speed = distance / fin_time;
	cout << "\n" << speed << " m/sec";
	return 0;
}	
