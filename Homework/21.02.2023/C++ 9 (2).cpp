#include <iostream>
using namespace std;
int main() {
    int arr[5]{5,1,10,23,13};
    int arr2[5]{8,3,18,66,14};
    int arr3[5]{};
    int arr4[2][5]{{5,1,10,23,13}, {8,3,18,66,14}};
    // Без подмасива
    cout << "Without multiarrays" << endl;
    for (int i = 0; i < 5; ++i) {
        arr3[i] = arr[i] + arr2[i];
        cout << arr3[i] << endl;
    }
    cout << "With multiarrays" <<endl;
    for (int i = 0; i < 5; ++i) {
        arr[i] = arr4[0][i] + arr4[1][i];
        cout << arr[i] << endl;
    }
    return 0;
}
