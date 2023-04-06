#include <iostream>
using namespace std;
void amount (int* array,int &positive,const int count,int &negative,int &zero ){
    for (int i = 0; i <count ; ++i) {
        if (array[i] == 0)
            zero += 1;
        if (array[i] < 0)
            negative += 1;
        if (array[i] > 0)
            positive += 1;
    }
    cout << "Amount of positive numbers in massive = " << positive << endl;
    cout << "Amount of negative numbers in massive = " << negative << endl;
    cout << "Amount 0 in massive = " << zero;
}
int main() {
    int num{};
    int* arr;
    cout << "Enter size of massive : ";
    cin >> num;
    arr = new int (num);
    cout << "Enter numbers to massive :" << endl;
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }
    int negative1{},positive1{},zero1{};
    amount(arr,positive1,num,negative1,zero1);
    return 0;
}