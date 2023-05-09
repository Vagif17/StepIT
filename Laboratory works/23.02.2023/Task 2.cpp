#include <iostream>
using namespace std;
int main(){
    int arr1[5]{-14,-2,0,1,5};
    int arr2[5]{0,-21,-3,8,10};
    int finalArr[10];
    int count{};
    int ind{};
    for (int i = 0; i < 5; ++i) {
        if (arr1[i] > 0){
            finalArr[count] = arr1[i];
            count++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (arr2[i] > 0){
            finalArr[count] = arr2[i];
            count++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (arr1[i] == 0) {
            finalArr[count] = arr1[i];
            count++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (arr2[i] == 0) {
            finalArr[count] = arr2[i];
            count++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (arr1[i] < 0) {
            finalArr[count] = arr1[i];
            count++;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (arr2[i] < 0) {
            finalArr[count] = arr2[i];
            count++;
        }
    }
    for (int i = 0; i < 10; ++i) {
        cout << finalArr[i] << " ";
    }
    return 0;
}