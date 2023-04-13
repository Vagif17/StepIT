#include <iostream>
using namespace std;
int main() {
    char* text{};
    int choose{};
    int len{};
    text = new char [300];
    cout << "Enter text (max 300 letter) : ";
    cin.getline(text, 300);
    while (text[len] != '\0')
    {
        len++;
    }
    cout << "What do we do ?";
    cout << "\n1. Find length. \n2. Change letter \n3. Sort \n";
    cin >> choose;
    switch (choose) {
        case 1:
        {
            cout << "Length of you'r text = " << len;
            break;
        }
        case 2:
        {
            char letterForChange{};
            char letterToChange{};
            cout << "Enter the letter you want to replace :";
            cin >> letterForChange;
            cout << "Enter new letter :";
            cin >> letterToChange;
            for (int i = 0; i < len ; ++i) {
                if (int (text[i]) == int (letterForChange))
                    text[i] = letterToChange;
                if (int (text[i] + 32 ) == int (letterForChange))
                    text[i] = char (int (letterToChange - 32));
            }
            cout << text;
            break;
        }
        case 3:
        {
            char* sortedText{};
            sortedText = new char [len];
            int index{};
            for (int i = 65; i < 90; ++i) {
                for (int j = 0; j < len; ++j) {
                    if (int (text[j]) == i)
                    {
                        sortedText[index] = text[j];
                        index++;
                    }
                }
            }
            for (int i = 97; i < 122; ++i) {
                for (int j = 0; j < len; ++j) {
                    if (int (text[j]) == i)
                    {
                        sortedText[index] = text[j];
                        index++;
                    }
                }
            }
            sortedText[index] = '\0';
            cout << sortedText;
        }
    }
    return 0;
}
