#include <iostream>
using namespace std;
int main() {
    char* wordForChange = "Jarvis";
    char* text = "Hello Jarvis,let's work!";
    char* wordToChange{};
    wordToChange = new char [100];
    cout << "Enter a replacement word : ";
    int lenText{};
    while (text[lenText] != '\0')
    {
        lenText++;
    }
    cin.getline(wordToChange, 100);
    int len{};
    while (wordForChange[len] != '\0')
    {
        len++;
    }
    char* check{};
    check = new char [len];
    int ind1{};
    int startIndex{};
    int choose{};
    int correct{};
    int tmp = - 1;
    for (int i = 0; i < lenText; ++i)
    {
        tmp++;
        ind1 = tmp;
        if (choose == 0) {
            for (int j = 0; j < len; ++j) {
                check[j] = text[ind1];
                ind1++;
            }
        }
        if (choose == 0) {
            for (int j = 0; j < len; ++j) {
                if (check[j] == wordForChange[j]) {
                    correct++;
                    choose = 1;
                } else ind1 - (ind1 - 1);
            }
        }
        if (choose == 1) {
            startIndex = i;
            break;
        }
    }
    char* finalText{};
    ind1 = 0;
    int ind2{};
    int lenWordToChange{};
    while (wordToChange[lenWordToChange] != '\0')
    {
        lenWordToChange++;
    }
    int skip{};
    if (len > lenWordToChange)
        skip = len - lenWordToChange;
    int finalLen = lenText + (len - lenWordToChange);
    finalText = new char [finalLen];
    for (int i = 0; i < lenText; ++i) {
        if (i >= startIndex && i <+ startIndex + lenWordToChange) {
            if (wordToChange[ind1] != '\0') {
                finalText[i] = wordToChange[ind1];
                choose = 0;
            }
            ind1++;
        } else
        {
            if (i < startIndex)
                finalText[i] = text[i];
            if (i >= startIndex)
                finalText[i] = text[i + skip];
        }
    }
    finalText[finalLen] = '\0';

    cout  << finalText << " " << finalLen;
    return 0;
}
