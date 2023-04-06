#include <iostream>
using namespace std;
int findNumbers (int n1[],int n2,int n3,int n4){
    for (int i = 0; i < 9; ++i) {
        if (n1[i] == 0)
            n2 += 1;
        if (n1[i] > 0)
            n3 += 1;
        if (n1 [i] < 0 )
            n4 += 1;
    }
    cout << "Count of zero in massive = " << n2 << endl << "Count of positive numbers = " << n3 << endl << "Count of negative numbers = " << n4;
    return 0;
}
int main() {
    int arr[9]{0,0,-2,-4,5,1,5,0,10};
    int countZero{},countPlus{},countMinus{};
    findNumbers(arr,countZero,countPlus,countZero);
    return 0;
}
