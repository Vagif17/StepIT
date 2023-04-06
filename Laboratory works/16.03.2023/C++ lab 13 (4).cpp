#include <iostream>
using namespace std;
int withOutzero(int* array1,const int n,int n2 = 0){
    int* arr2{};
    for (int i = 0,b = 0; i < n ; ++i) {
        if (array1[i] > 0)
        {
            n2 += 1;
        }
    }
    const int n3 = n2;
    arr2 = new int(n2);
    for (int i = 0,b = 0; i < n; ++i) {
        if (array1[i] > 0)
        {
            arr2[b] = array1[i];
            b += 1;
        }
    }
    for (int i = 0; i < n2; ++i) {
        cout << arr2[i] << ' ';
    }
    delete array1;
    return 0;
}
int main() {
    int* arr1{};
    int num{};
    cout << "Enter size of massive : ";
    cin >> num;
    arr1 = new int(num);
    cout << "Enter number in massive : " << endl;
    for (int i = 0; i < num; ++i) {
        cin >> arr1[i];
    }
    withOutzero(arr1,num);
    return 0;
}
