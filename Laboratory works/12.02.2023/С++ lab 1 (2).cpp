#include <iostream>
using namespace std;
int main()
{
    int manat{}, gapik{};
    cout << "Enter manat :";
    cin >> manat;
    cout << "Enter gapik :";
    cin >> gapik;
    manat = manat + gapik / 100;
    gapik = gapik % 100;
    cout << manat << " manat " << gapik << " gapik";
    return 0;
}
