#include <iostream>
using namespace std;
int deleteArr(int* arr,int count,int deleteArr){
    int newArr[count - deleteArr];
    for (int i = 0; i < count - deleteArr; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = 0; i < count - deleteArr; ++i) {
        cout << newArr[i];
    }
    return 0;
}
int main() {
    int* startArr{};
    int startCount{};
    cout << "Enter count of numbers in massive :";
    cin >> startCount;
    startArr = new int (startCount);
    cout << "Enter numbers : " << endl;
    for (int i = 0; i < startCount; ++i) {
        cin >> startArr[i];
    }
    int del{};
    cout << "Enter start index for delete : ";
    cin >> del;
    deleteArr(startArr,startCount,del);
    delete (startArr);
    return 0;
}
