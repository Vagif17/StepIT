#include <iostream>
using namespace std;
int primeNumber(int n1){
    int count{},prime{};
    int* arr;
    arr = new int (n1);
    cout << "Enter numbers : " << endl;
    for (int i = 0; i < n1; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n1 ; ++i) {
        for (int j = 1; j <= arr[i]; ++j) {
            if (arr[i] == 1 || arr[i] == 2 ) {
                count++;
                break;
            }
            if (j != 1 && j != arr[i]){
                if (arr[i] % j == 0){
                    prime = 0;
                    break;
                }
                else
                    prime = 1;
            }
            if (j == arr[i]) {
                if (prime == 1)
                    count++;
            }
        }
    }
    cout << count;
    return 0;
}
int main() {
    int length{};
    cout << "Enter length : ";
    cin >> length;
    primeNumber(length);
    return 0;
}
