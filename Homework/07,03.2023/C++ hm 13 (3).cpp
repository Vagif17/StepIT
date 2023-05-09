#include <iostream>
#include <time.h>
using namespace std;
int game (int rand,int n1,int n2, int n3, int n4, int p,int tryp) {
    if (p == rand){
        tryp += 1;
        cout << "You are win!";
        cout << "You tried " << tryp << " Times";
        return 0;
    }
    else {
        tryp += 1;
        cout << "You lose.." << endl;
        int p1 = p / 1000, p2 = p / 100 % 10, p3  = p / 10 % 10, p4 = p % 10;
        if (p1 == n1)
            cout << "Digit 1 right position" << endl;
        if (p2 == n2)
            cout << "Digit 2 right position" << endl;
        if (p3 == n3)
            cout << "Digit 3 right position" << endl;
        if (p4 == n4)
            cout << "Digit 4 right position" << endl;
        cout << "Try again :" << endl;
        cin >> p;
        game(rand,n1,n2,n3,n4,p,tryp);
    }
}
int main() {
    int random{};
    srand(time(0));
    random = rand() % 10000 + 1000;
    cout << random;
    int n1 = random / 1000, n2 = random / 100 % 10, n3  = random / 10 % 10, n4 = random % 10;
    int pnumber{};
    cout << endl << "Enter your number :";
    cin >> pnumber;
    while (pnumber > 9999) {
        cout << "Enter right number ! ";
        cin >> pnumber;
    }
    game(random,n1,n2,n3,n4, pnumber,0);
    return 0;
}

