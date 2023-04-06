#include <iostream>
using namespace std;
int findArifm(int array[],int r,int c){
    for (int i = 0; i < 10; ++i) {
        c += 1l;
        r += array[i];
    }
    cout << "Amount of numbers = " << r << endl<< "Count of numbers = " << c << endl << "Arifm = " << r / c;
    return 0;
}
int main() {
    int arr[10]{5,10,12,7,11,6,13,4,17,24};
    int res{};
    int count{};
    findArifm(arr,res,count);
    return 0;
}
