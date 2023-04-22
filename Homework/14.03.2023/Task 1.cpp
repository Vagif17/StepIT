#include <iostream>
using namespace std;
int main() {
    char** array{};
    char* item = new char [20]{};
    float * price{};
    int len{};
    cout << "Enter amount of item : ";
    cin >> len;
    array = new char *[len]{};
    price = new float [len]{};
    for (int i = 0; i < len; ++i) {
        item = new char [20]{};
        cin.ignore();
        cout << "Enter item : ";
        cin.getline(item,20);
        cout << "Enter price :";
        cin >> price[i];
        array[i] = item;
    }
    cout << endl;
    cout << "Items :\n";
    for (int i = 0; i < len; ++i) {
        cout << i + 1 << ". " << array[i] << ":" << price[i] << endl;
    }
    int choose{};
    cout << "\n1.Find the most expensive \n2.Find cheapest \n3.Sort \n:";
    cin >> choose;
    switch (choose) {
        case 1: {
            float max = price[0];
            int index{};
            for (int i = 0; i < len; ++i) {
                if (max < price[i])
                {
                    max = price[i];
                    index = i;
                }
            }
            cout << "The most expensive item is " << array[index] << " with price = " << max;
            break;
        }
        case 2:{
            float min = price[0];
            int index{};
            for (int i = 0; i < len; ++i) {
                if (min > price[i])
                {
                    min = price[i];
                    index = i;
                }
            }
            cout << "The cheapest item is " << array[index] << " with price = " << min;
            break;
        }
        case 3:{
            int ind1{};
            int ind2{};
            char** sorted = new char * [len]{};
            float* sortPrice = new float [len]{};
            for (int i = 65; i >= 65 && i <= 90 ; ++i) {
                for (int j = 0; j < len ; ++j) {
                    if (int(array[j][0]) == i || (array[j][0]) == i + 32) {
                        sorted[ind2] = array[j];
                        sortPrice[ind2] = price[j];
                        ind2++;
                    }
                }
            }
            for (int i = 0; i < len; ++i) {
                cout << i + 1 << ". " <<sorted[i] << ":" << sortPrice[i] << endl;
            }
            break;
        }
    }
    return 0;
}