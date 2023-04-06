#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int num{}, pnum{}, count = 1;
    srand(time(0));
    num = rand() % 500 + 1;
    cout << num << endl;
    while (pnum != num)
    {
        cout << "Enter number :";
        cin >> pnum;
        if (pnum > num)
            cout << "You number is bigger" << endl;
        if (pnum < num)
            cout << "You number is lower" << endl;
        if (pnum == num)
        {
            cout << "Right number!";
            break;
        }
        if (pnum == 0)
        {
            cout << "Game over!";
            break;
        }
        count = count + 1;
    }
    cout << "\nYour tried - " << count << "time.";
    return 0;
}