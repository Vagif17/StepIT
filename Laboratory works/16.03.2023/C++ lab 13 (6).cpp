#include <iostream>
using namespace std;
int add(int* firstArr,int* secondArr,int* thirdArr,int changeIndex,int count1,int count2,int iForThird){
    const int finalCount = count1 + count2;
    int finalArr[finalCount];
    int o{};
    for (int i = 0; i < changeIndex; ++i) {
        finalArr[i] = firstArr[i];
        o++;
    }
    for (int i = 0; i < count2 ; ++i) {
        finalArr[o] = secondArr[i];
        o++;
    }
    for (int i = 0; i < iForThird; ++i) {
        finalArr[o] = thirdArr[i];
        o++;
    }
    for (int i = 0; i < finalCount; ++i) {
        cout << finalArr[i];
    }
}
int main() {
    int* startArr{};
    int startCount{};
    cout << "Enter count of numbers in massive :";
    cin >> startCount;
    cout << "Enter numbers :" << endl;
    startArr = new int (startCount);
    for (int i = 0; i < startCount; ++i) {
        cin >> startArr[i];
    }
    int* addArr{};
    int addCount{};
    cout << "Enter count of numbers in add massive : ";
    cin >> addCount;
    addArr = new int (addCount);
    cout << "Enter numbers :" << endl;
    for (int i = 0; i < addCount; ++i) {
        cin >> addArr[i];

    }
    int index{};
    cout << "Enter start index for change :";
    cin >> index;
    const int i = startCount - index;
    int arr[i];
    for (int j = 0,b = index; j < i; ++j,++b) {
        arr[j] = startArr[b];
    }
    add(startArr,addArr,arr,index,startCount,addCount,i);
    delete (startArr);
    delete (addArr);
    return 0;
}
