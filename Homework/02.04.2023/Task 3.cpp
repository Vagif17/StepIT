#include <iostream>
using namespace std;
int main()
{
    char* text = "Barcelona is fooball team.";
    int len{};
    while (text[len] != '\0')
    {
        len++;
    }
    char* lowercaseText{};
    lowercaseText = new char [len];
    for (int i = 0; i < len; ++i) {
        if (int (text[i]) >= 97 && int (text[i]) <= 122 ){
            lowercaseText[i] = int ((text[i]) - 32);
        } else lowercaseText[i] = text[i];
    }
    int count{};
    char* check{}; // Это сделанно для того что бы если буква в тексте повторялась,она выводилась только 1 раз,а не каждый
    // раз снова с одинаковым числом.
    check = new char[len];
    int choose{};
    for (int i = 0; i < len; ++i) {
        count = 0;
        for (int j = 0; j < len; ++j) {
            if (int(lowercaseText[i]) == int(lowercaseText[j])) {
                for (int k = 0; k < len; ++k) {
                    if (lowercaseText[i] != check[k]){
                        choose = 1;
                    } else{
                        choose = 0;
                        break;
                    }
                }
                count++;
            }
        }
        check[i] = lowercaseText[i];
        if (choose == 1) {
            if (int(lowercaseText[i]) >= 65 && int(lowercaseText[i]) <= 95) {
                cout << "Count of letter '" << lowercaseText[i] << "' = " << count << " ";
            }
        }
    }
    return 0;
}