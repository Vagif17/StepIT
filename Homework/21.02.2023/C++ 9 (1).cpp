#include <iostream>
using namespace std;
int main()
{
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    int arr2[2][5]; // С помощью подмасива
    int arr4[5]{},arr5[5]{}; // С помощью двух массивов
    int count = 1;
    //С подмасивом
    for (int i = 0,b = 0; i < 10; ++i)
    {
        if (count < 4)
        {
            arr2[0][i] = arr[i];
        }
        cout << arr2[0][i] << endl;
    }
    // С двумя массивами
//    for (int i = 0, b = 0; i < 10; ++i, ++b) {
//        if (i != 5)
//            arr5[i] = arr[i];
//        if (count >= 5 || count == 5)
//            arr4[b] = arr[i];
//        count += 1;
//    }
//    cout << "First massive : " << endl;
//    for (int i = 0; i < 5; ++i) {
//        cout << arr5[i] << endl;
//    }
//    cout << "Second massive : " << endl;
//    for (int i = 5; i < 10; ++i) {
//        cout << arr4[i] << endl;
//    }
//    return 0;
//
}