#include <iostream>
#include <time.h>
using namespace std;
int foo(int arr1[2][5],int r){
    srand(time(0));
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            r = rand() % 10;
            arr1[i][j] = r;
        }
    }
    return 0;
}
int foo(int arr2[2][5]){
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
int foo(int arr3[2][5],int minimum,int maximum){
    minimum = arr3[0][0];
    maximum = arr3[0][0];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr3[i][j] > maximum)
                maximum = arr3[i][j];
            if (arr3[i][j] < minimum)
                minimum = arr3[i][j];
        }
    }
    cout << "Max number is massive - " << maximum << " Min number in massive - " << minimum << endl;
    return 0;
}
int foo(int arr4[2][5],int arr5[2][5]){
    //Не получилось.
}
int main() {
    int arr[2][5],random{},minN{},maxN{};
    int sortarr[2][5];
    foo(arr,random);
    foo(arr);
    foo(arr,minN,maxN);
    foo(arr,sortarr);
    return 0;
}
