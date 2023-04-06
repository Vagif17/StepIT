#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    size_t difficult{}, num{}, num2{}, res{}, pnum{}, questions{}, wrong{}, right{};
    cout << "Choose difficult :" << endl;
    cout << "1. easy" << endl;
    cout << "2. midle" << endl;
    cout << "3. hard" << endl; // На 3 уровне сложности есть шанс что некоторые цифры будут больше 10
    cin >> difficult;
    switch (difficult)
    {
    case 1:
        questions = 3;
        while (questions != 0)
        {
          srand(time(0));
          num = rand();
          num = num % 5 + 1;
          num2 = rand();
          num2 = num % 1 + 2;
          res = num * num2;
          cout << num << "*" << num2 << "=";
          cin >> pnum;
          if (pnum = res)
          {
              right = right + 1;
              cout << "Right answer!" << endl;
          }
          else
          {
              wrong = wrong + 1;
              cout << "Whong answer!" << endl;;
          }
          questions = questions - 1;
        }
        cout << "Right answers - " << right << endl;
        cout << "Wrong answers - " << wrong << endl;
        cout << right << "/3";
        break;
    case 2:
        questions = 7;
        while (questions != 0)
        {
            srand(time(0));
            num = rand();
            num = num % 9 + 4;
            num2 = rand();
            num2 = num % 5 + 3;
            res = num * num2;
            cout << num << "*" << num2 << "=";
            cin >> pnum;
            if (pnum == res)
            {
                cout << "Right answer!" << endl;
                right = right + 1;
            }
            else
            {
                cout << "Wrong answer!" << endl;
                wrong = wrong + 1;
            }
            questions = questions - 1;
        }
        cout << "Right answers - " << right << endl;
        cout << "Wrong answers - " << wrong << endl;
        cout << right << "/7";
        break;
    case 3:
        questions = 10;
        while (questions != 0)
        {
            srand(time(0));
            num = rand();
            num2 = rand();
            num = num % 9 + 6;
            num2 = num % 7 + 4;
            res = num * num2;
            res = num * num2;
            cout << num << "*" << num2 << "=";
            cin >> pnum;
            if (pnum == res)
            {
                cout << "Right answer!" << endl;
                right = right + 1;
            }
            else
            {
                cout << "Wrong answer!" << endl;
                wrong = wrong + 1;
            }
            questions = questions - 1;           
        }
        cout << "Right answers - " << right << endl;
        cout << "Wrong answers - " << wrong << endl;
        cout << right << "/10";
        break;
    }
    return 0;
}