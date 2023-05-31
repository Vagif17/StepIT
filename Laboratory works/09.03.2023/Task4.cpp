#include <iostream>
using namespace std;

void movement(int array[4][2], int fArray[4][2], int steps, int i = 0, int b = 0)
{
    
    if (b == 2)
    {
        b = 0;
        i++;
    }

    if (i == 4)
    {
        return;
    }

    if (i + steps < 4)
    {
        fArray[i + steps][b] = array[i][b];
        b++;
    }

    if (i + steps > 4)
    {
        fArray[i + steps - 4][b] = array[i][b];
        b++;

    }

    if ((i + steps) % 4 == 0)
    {
        fArray[0][b] = array[i][b];
        b++;
    }
    

    movement(array, fArray, steps, i, b);
}



int main()
{
    int arr[4][2]{ {1,2},{3,4},{5,6},{7,8} };
    int FinalArr[4][2]{};
    int stepDown{};

    cout << "Enter steps : ";
    cin >> stepDown;

    if (stepDown > 4)
    {
        stepDown = stepDown % 4;
    }

    movement(arr, FinalArr, stepDown);

    cout << "Before : " << endl;

    for (size_t i = 0; i < 4; i++)
    {
        cout << endl;
        for (size_t b = 0; b < 2; b++)
        {
            cout << arr[i][b] << ' ';
        }
    }


    cout << "\nAfter : " << endl;
    for (size_t i = 0; i < 4; i++)
    {
        cout << endl;
        for (size_t b = 0; b < 2; b++)
        {
            cout << FinalArr[i][b] << ' ';
        }
    }
}
