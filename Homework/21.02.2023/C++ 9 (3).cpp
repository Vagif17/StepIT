#include <iostream>
using namespace std;
int main() {
    int arr[7]{},average_costs{},count{},c1{};
    for (int i = 0; i < 7; ++i) {
       if (i == 0)
           cout << "Enter your expenses : \n" ;
    cin >> arr[i];
    average_costs += arr[i];
    }
    cout << "Average spend per week = " << average_costs / 7 << endl;
    cout << "Total spending per week = " << average_costs << endl;
    for (int i = 0; i < 7; ++i) {
        count += 1;
        if(arr[i] >= 100) {
            c1 = count;
            if (c1 == 3)
                cout << "Spend over 100 $ - Tuesday" << endl;
            if (c1 == 1)
                cout << "Spend over 100 $ - Sunday" << endl;
            if (c1 == 2)
                cout << "Spend over 100 $ - Monday" << endl;
            if (c1 == 4)
                cout << "Spend over 100 $ - Wednesday" << endl;
            if (c1 == 5)
                cout << "Spend over 100 $ - Thursday" << endl;
            if (c1 == 6)
                cout << "Spend over 100 $ - Friday" << endl;
            if (c1 == 7)
                cout << "Spend over 100 $ - Saturday" << endl;
        }
    }
    cout << "Count of days wnen spend over 100$ - " << c1;
    return 0;
}
