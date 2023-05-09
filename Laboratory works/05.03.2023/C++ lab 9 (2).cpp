#include <iostream>
using namespace std;
int rotate(int num)
{
	int* length;
    int* arr2;
    int change{};
    length = new int (num);
    arr2 = new int (num);
    cout << "Enter numbers :" << endl;
    for (int i = 0; i < num; ++i) {
        cin >> length[i];
    }
    for (int i = 0, b = num - 1 ; i < num; ++i,--b) {
        arr2[i] = length[b];
    }
    for (int i = 0; i < num; ++i) {
        cout << arr2[i];
    }
    delete length;
    return 0;
}
int main() {
    int len{};
    cout << "Enter length : ";
    cin >> len;
    rotate(len);
    return 0;
}