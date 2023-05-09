#include <iostream>
using namespace std;
int main(){
    int arr[5]{0,0,15,13,4};
    int finalArr[5];
    int count{};
    int ind{};
    for (int i = 0; i < 5; ++i) {
        if (arr[i] != 0)
        {
            finalArr[ind] = arr[i];
            ind++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (finalArr[i] > 0) {
            finalArr[i] = finalArr[i];
        }
        else
            finalArr[i] = -1;
    }
    for (int i = 0; i < 5; ++i) {
        cout << finalArr[i] << " ";
    }
    return 0;
}