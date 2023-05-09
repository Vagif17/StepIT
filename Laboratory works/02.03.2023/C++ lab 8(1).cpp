#include <iostream>
using namespace std;

int pryamoygolnik(int n,int k){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << '*';
        }
        cout << endl;
    }
}


int main() {
    int length{},height{};
    cout << "Enter length :";
    cin >> length;
    cout << "Enter height :";
    cin >> height;
    pryamoygolnik(height,length);
    return 0;
}
