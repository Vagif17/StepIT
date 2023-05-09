#include "String.h"
// Task #1
int comparisons (char* w1,char* w2){
    int len1{};
    int len2{};
    int i{};
    while (w1[i] != '\0' )
    {
        len1++;
        i++;
    }
    i = 0;
    while (w2[i] != '\0')
    {
        len2++;
        i++;
    }
    if (len1 == len2)
        return 0;
    if (len1 > len2)
        return 1;
    else return -1;
}

// Task #2
int length(char* w1){
    int i{};
    while(w1[i] != '\0')
    {
        i++;
    }
    return i;
}

// Task #3
char* intToStr(int w1[]){
    int len{};
    while (w1[len])
    {
        len++;
    }
    char* word;
    word = new char (len);
    for (int i = 0; i < len; ++i) {
        word[i] = char (w1[i]);
    }
    return word;
}

// Task 4
char* upperCase(char* w1){
    int len{};
    while (w1[len] != '\0') {
        len++;
    }
    int intWord[len];
    int index{};
    for (int i = 0; i < len; ++i) {
        intWord[index] = w1[i];
        index++;
    }
    char* wordFinal;
    wordFinal = new char(len + 1);
    wordFinal[len] = '\0';
    for (int i = 0; i < len; ++i) {
        if (intWord[i] == 97 )
            wordFinal[i] = char (65);
        if (intWord[i] == 98)
            wordFinal[i] = char (66);
        if (intWord[i] == 99)
            wordFinal[i] = char (67);
        if (intWord[i] == 100)
            wordFinal[i] = char (68);
        if (intWord[i] == 101)
            wordFinal[i] = char (69);
        if (intWord[i] == 102)
            wordFinal[i] = char (70);
        if (intWord[i] == 103)
            wordFinal[i] = char (71);
        if (intWord[i] == 104)
            wordFinal[i] = char (72);
        if (intWord[i] == 105)
            wordFinal[i] = char (73);
        if (intWord[i] == 106)
            wordFinal[i] = char (74);
        if (intWord[i] == 107)
            wordFinal[i] = char (75);
        if (intWord[i] == 108)
            wordFinal[i] = char (76);
        if (intWord[i] == 109)
            wordFinal[i] = char (77);
        if (intWord[i] == 110)
            wordFinal[i] = char (78);
        if (intWord[i] == 111)
            wordFinal[i] = char (79);
        if (intWord[i] == 112)
            wordFinal[i] = char (80);
        if (intWord[i] == 113)
            wordFinal[i] = char (81);
        if (intWord[i] == 114)
            wordFinal[i] = char (82);
        if (intWord[i] == 115)
            wordFinal[i] = char (83);
        if (intWord[i] == 116)
            wordFinal[i] = char (84);
        if (intWord[i] == 117)
            wordFinal[i] = char (85);
        if (intWord[i] == 118)
            wordFinal[i] = char (86);
        if (intWord[i] == 119)
            wordFinal[i] = char (87);
        if (intWord[i] == 120)
            wordFinal[i] = char (88);
        if (intWord[i] == 121)
            wordFinal[i] = char (89);
        if (intWord[i] == 122)
            wordFinal[i] = char (122);
        if (intWord[i] == 32)
            wordFinal[i] = ' ';
    }
    return wordFinal;
}


// Task 5
char* lowerCase(char* w1){
    int len{};
    while (w1[len] != '\0') {
        len++;
    }
    int intWord[len];
    int index{};
    for (int i = 0; i < len; ++i) {
        intWord[index] = w1[i];
        index++;
    }
    char* wordFinal;
    wordFinal = new char(len + 1);
    wordFinal[len] = '\0';
    for (int i = 0; i < len; ++i) {
        if (intWord[i] == 65 )
            wordFinal[i] = char (97);
        if (intWord[i] == 66)
            wordFinal[i] = char (98);
        if (intWord[i] == 67)
            wordFinal[i] = char (99);
        if (intWord[i] == 68)
            wordFinal[i] = char (100);
        if (intWord[i] == 69)
            wordFinal[i] = char (101);
        if (intWord[i] == 70)
            wordFinal[i] = char (102);
        if (intWord[i] == 71)
            wordFinal[i] = char (103);
        if (intWord[i] == 72)
            wordFinal[i] = char (104);
        if (intWord[i] == 73)
            wordFinal[i] = char (105);
        if (intWord[i] == 74)
            wordFinal[i] = char (106);
        if (intWord[i] == 75)
            wordFinal[i] = char (107);
        if (intWord[i] == 76)
            wordFinal[i] = char (108);
        if (intWord[i] == 77)
            wordFinal[i] = char (109);
        if (intWord[i] == 78)
            wordFinal[i] = char (110);
        if (intWord[i] == 79)
            wordFinal[i] = char (111);
        if (intWord[i] == 80)
            wordFinal[i] = char (112);
        if (intWord[i] == 81)
            wordFinal[i] = char (113);
        if (intWord[i] == 82)
            wordFinal[i] = char (114);
        if (intWord[i] == 83)
            wordFinal[i] = char (115);
        if (intWord[i] == 84)
            wordFinal[i] = char (116);
        if (intWord[i] == 85)
            wordFinal[i] = char (117);
        if (intWord[i] == 86)
            wordFinal[i] = char (118);
        if (intWord[i] == 87)
            wordFinal[i] = char (119);
        if (intWord[i] == 88)
            wordFinal[i] = char (120);
        if (intWord[i] == 89)
            wordFinal[i] = char (121);
        if (intWord[i] == 90)
            wordFinal[i] = char (122);
        if (intWord[i] == 32)
            wordFinal[i] = ' ';
    }
    return wordFinal;
}

// Task 6
char* reverse(char* w1){
    int len{};
    while (w1[len] != '\0')
    {
        len++;
    }
    char* reverseWord;
    reverseWord = new char (len + 1);
    for (int i = len, b = 0; i > 0; --i,++b) {
        reverseWord[i] = w1[b];
    }
    reverseWord[0] = ' ';
    return reverseWord;
}