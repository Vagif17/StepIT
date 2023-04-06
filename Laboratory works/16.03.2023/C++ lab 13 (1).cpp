#include <iostream>
using namespace std;
void amount(int* array, int& result, const int count, int resultMuptiple) {
    for (int i = 0; i < count; ++i) {
        result += array[i];
        resultMuptiple *= array[i];
    }
    cout << "Amount of all numbers in massive = " << result << endl;
    cout << "Amount multiple of all numbers in massive = " << resultMuptiple;
}
int main() {
    int num{};
    int* arr;
    cout << "Enter size of massive : ";
    cin >> num;
    arr = new int(num);
    cout << "Enter numbers to massive :" << endl;
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }
    int res{}, multiple = 1;
    amount(arr, res, num, multiple);
    return 0;
}