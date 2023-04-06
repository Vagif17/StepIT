#include <iostream>
using namespace std;
void isMassive (int* array1,int* array2,const int number,int count){
    for (int i = 0; i < number; ++i) {
        if (array1[i] == array2[i])
            count += 1;

    }
    if (count == number)
        cout << "Second massive is screeding for first massive ";
    else
        cout << "Second massive is not screeding for first massive ";
}
int main() {
    int *arr1{};
    int *arr2{};
    int num{};
    cout << " Enter size of massive : ";
    cin >> num;
    arr1 = new int (num);
    arr2 = new int (num);
    cout << "Enter numbers to first massive : " << endl;
    for (int i = 0; i < num; ++i) {
        cin >> arr1[i];
    }
    cout << endl << "Enter numbers to second massive :" << endl;
    for (int i = 0; i < num; ++i) {
        cin >> arr2[i];
    }
    isMassive(arr1,arr2,num,0);
    return 0;
}
