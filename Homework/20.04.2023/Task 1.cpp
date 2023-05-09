#include <iostream>
using namespace std;
int main() {
    char* text = "On September 2, 2019, FC Barcelona and Las Palmas reached an agreement for the transfer of Pedri. However, the Canarian player didn't join the blaugranes until August 2020. Born in Tegueste, Tenerife, on November 25, 2002, he began his football career in the team from his hometown. anolecraB CF ";
    char* findText = new char [450]{};
    cout << "Enter text :";
    cin.getline(findText, 450);
    int len{};
    while (findText[len] != '\0')
    {
        len++;
    }
    int textLen{};
    while (text[textLen] != '\0')
    {
        textLen++;
    }
    int amount{};
    int reverseIndex = textLen;
    for (int i = 0,c = textLen; i < textLen; ++i,--c) {
        int index{};
        int correct{};
        for (int j = i, b = 0,g = textLen; b < len; ++j, ++b,--c) {
            if (text[j] == findText[index] ) {
                index++;
                correct++;
                if (len == correct) {
                    amount++;
                    cout << "Your text occurs " <<amount << " times in this text";
                    cout << endl << "Your text start from " << i << " index";
                    cout << endl << endl;
                }
            }
            else {
                if (text[c] == findText[index] )
                {
                    index++;
                    correct++;
                    reverseIndex--;
                    if (len == correct) {
                        amount++;
                        cout << "Your text occurs " << amount << " times in this text";
                        cout << endl << "Your text start from " << reverseIndex << " index";
                        cout << endl << endl;
                    }
                } else break;

            }
        }

    }
    return 0;
}
