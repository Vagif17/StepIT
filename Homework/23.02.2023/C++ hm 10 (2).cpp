#include <iostream>
using namespace std;
int main()
{
    int arr[2][3],num{};
    cout <<"Enter number :";
    cin >> num;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr[i][j] = num;
            num += 1;
        }
    }
    for (int i = 0; i < 6; ++i) {
        cout << arr[0][i] << endl;
    }
    return 0;
}
