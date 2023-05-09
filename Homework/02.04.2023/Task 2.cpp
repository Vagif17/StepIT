#include <iostream>
using namespace std;
int main() {
    char* text = "Hello World!i am ready.my name is VG!";
    int len{};
    int tmp;
    while (text[len] != '\0')
    {
        len++;
    }
    int ind{};
    char* finaltext{};
    finaltext = new char [len];
    for (int i = 0; i < len; ++i) {
        if (text[ind] == '.' || text[ind] == '!' || text[ind] == '?')
        {
            finaltext[ind] = text[ind];
            if (text[ind + 1]  != 0){
                tmp = (text[ind + 1]);
                tmp -= 32;
                finaltext[ind + 1] = char (tmp);
                ind += 2;
            }
        } else finaltext[ind] = text[ind], ind++;
    }
    cout << finaltext;
    return 0;
}