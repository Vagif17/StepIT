#include <iostream>
using namespace std;
int main()
{
    float size_map{}, distance{};
    cout
        << "Calculation of routes between settlements" << endl
        << "Enter initial data : " << endl
        << "Size of map (Km in 1 cm on map -> ";
    cin >> size_map;
    cout << "Distance between settlements on map (in cm) -> ";
    cin >> distance;
    cout << "Distance between settlement = " << size_map * distance << endl;
    return 0;
}