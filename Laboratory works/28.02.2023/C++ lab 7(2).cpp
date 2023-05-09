#include <iostream>
using namespace std;
int main() {
    int arr[3][3]{{5,3,11},{2,9,13},{1,0,15}},res{},allRes{};
    for (int i = 0; i < 3; ++i) {
        res = 0;
        for (int j = 0; j < 3 ; ++j) {
            cout << arr[i][j] << " ";
            res += arr[i][j];
        }
        allRes += res;
        cout << "| " << res;
        cout << endl;
    }
    cout << "------------" << endl;
    res = 0;
    for (int a = 0, b = 0; a < 3; ++a, ++b) {
        res = 0;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 1; ++j) {
                res += arr[i][b];
            }
        }
        cout << res << ' ';
    }
    cout << "| " << allRes;
    return 0;
}