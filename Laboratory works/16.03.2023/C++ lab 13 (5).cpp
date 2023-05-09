#include <iostream>
using namespace std;
int add(int* a,int* b,int acount,int bcount){
    const int finalCount = acount + bcount;
    int finalArr[finalCount];
    int o{};
    for (int i = 0; i < acount; ++i) {
        finalArr[i] = a[i];
        o ++;
    }
    for (int i = 0,c = 0; i < finalCount; ++i,++c){
        finalArr[o] = b[i];
        o++;
    }
    for (int i = 0; i < finalCount; ++i) {
        cout << finalArr[i] << " ";
    }
}
int main(){
    int* firstArr{};
    int count{};
    cout << "Enter count number of massive : ";
    cin >> count;
    firstArr = new int (count);
    cout << "Enter numbers :" << endl;
    for (int i = 0; i < count; ++i) {
        cin >> firstArr[i];
    }
    int* addArr{};
    int addCount{};
    cout << "Enter count number of add massive : ";
    cin >> addCount;
    addArr = new int (addCount);
    cout << "Enter numbers :" << endl;
    for (int i = 0; i < addCount; ++i) {
        cin >> addArr[i];
    }
    add(firstArr,addArr,count,addCount);
    return 0;
}
