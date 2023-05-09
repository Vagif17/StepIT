#include <iostream>
#include "WashMachine .h"
using namespace std;
int main() {
    WashMachine wash;
    do {
        cout << endl;
        cout << " Enter height : ";
        cin >> wash.height;
        cout << "Enter length : ";
        cin >> wash.length;
        cout << "Enter width : ";
        cin >> wash.width;
        cout << "Enter power (watt) : ";
        cin >> wash.power;
        cout << "Enter power spin speed : ";
        cin >> wash.spinSpeed;
        cout << "Enter temperature :";
        cin >> wash.temperature;
        cout << "Enter color :";
        cin.ignore();
        cin.getline(wash.color, 20);
        cout << "Enter firm : ";
        cin.getline(wash.firm, 30);
    } while (wash.washing() == 1);
    return 0;
}