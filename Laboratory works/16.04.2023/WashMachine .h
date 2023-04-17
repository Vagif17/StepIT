#include <iostream>
using namespace std;
struct WashMachine{
        int height{};
        int length{};
        int width{};
        int power{};
        int spinSpeed{};
        int temperature{};
        char *color = new char[20]{};
        char *firm = new char[30]{};
        int washing () {
            if (power < 2000) {
                cout << "Not enough current" << "\n min 2000, max 3000";
                return 1;
            }
            if (power > 3000) {
                cout << "Excessive amount of current" <<"\n min 2000, max 3000";
                return 1;
            }
            if (spinSpeed < 600)
            {
                cout << "Spin speed too low" << "\nmin 600, max 1400";
                return 1;
            }
            if (spinSpeed > 1400)
            {
                cout << "Spin speed too high" << "\nmin 600, max 1400";
                return 1;
            }
            if (temperature < 20)
            {
                cout << "Temperature is too low" << "\nmin 20, max 90";
                return 1;
            }
            if (temperature > 95)
            {
                cout << "Temperature is too high" << "\nmin 20, max 90";
                return 1;
            }
            cout << "Washing..." << endl << "Washing complete!";
            return 0;
        }
};