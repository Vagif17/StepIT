#include <iostream>
#include "ctime"
using namespace std;
int main() {
    srand(time(NULL));
    int arr[5][10];
    int arrFinal[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            arr[i][j] = rand() % 10;
        }
    }
    int times = 1;
    for (int i = 0; i < 5; ++i) {
        times = 1;
        for (int j = 0; j < 5; ++j)  {
            if (j == 0) {
                arrFinal[i][j] = arr[i][j + 1] + arr[i][j];
                times += 1;
            }
            else {
                arrFinal[i][j] = arr[i][j + times] + arr[i][j + (times - 1)] ;
                times += 1;
            }
        }
    }
    cout << "First massive \n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n' ;
    }
    cout << "Second massive \n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << arrFinal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}