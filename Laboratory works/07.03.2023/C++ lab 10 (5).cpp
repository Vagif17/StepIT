#include <iostream>
using namespace std;
int foo(int array[6],int maximum){
    for (int i = 0; i < 6; ++i) {
        if (array[i] > maximum)
            maximum = array[i];
    }
    cout << "Max number in this massive - " <<maximum << endl;
    return 0;
}
int foo(int array[2][5],int maximum){
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[i][j] > maximum)
                maximum = array[i][j];
        }
    }
    cout << "Max number in this massive - " <<maximum;
    return 0;
}
int foo(int array[2][5],int n1,int n2){
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[i][j] > n1)
                n1 = array[i][j];
            if (array[i][j] > n2 && array[i][j] != n1)
                n2 = array[i][j];
        }
    }
    cout << endl << n1 << '+' << n2 <<'=' << n1 + n2;
    return 0;
}
int foo(int array[2][5],int n1,int n2,int n3){
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[i][j] > n1)
                n1 = array[i][j];
            if (array[i][j] > n2 && array[i][j] != n1)
                n2 = array[i][j];
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[i][j] > n3 && array[i][j] != n1 && array[i][j] != n2)
                n3 = array[i][j];
        }
    }
    cout << endl <<n1 << '+' << n2 << '+' << n3 << '=' << n1+n2+n3;
    return 0;
}
int main() {
    int arr[6]{7,23,50,14,5,10};
    int arr1[2][5]{{5,3,6,10,2},{7,13,7,9,11}};
    foo(arr,0);
    foo(arr1,0);
    foo(arr1,0,0);
    foo(arr1,0,0,0);
    return 0;
    // Пункт 3 вы говорили не делать.
}