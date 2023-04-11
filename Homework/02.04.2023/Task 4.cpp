#include <iostream>
using namespace std;
int main() {
    char* Text = "Barcelona15 is best3 in the Europe14"; // Можно изменить что бы проверить код.
    int len{};
    int count{};
    while (Text[len] != '\0')
    {
        len++;
        if (int (Text[len]) >= 48 && int (Text[len]) <= 57 )
            count++;
    }
    cout << "Amount of numbers in Text = " <<count;
    return 0;
}