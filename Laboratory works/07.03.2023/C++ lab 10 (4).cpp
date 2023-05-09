#include <iostream>
#include <time.h>
using namespace std;
int findMin(int array[],int count,int c1,int add,int c2,int min,int position,int p1,int p2,int minP){
    if (add == 100) {
        cout << endl << "Min amount of 10 numbers = " << min ;
        cout << endl << "Start position of min amount of 10 numbers = " << minP;
        return 0;
    }
    if (count < add - 10){
        c1 += array[count];
        count += 1;
        p1 = count;
    }
    if (count >= add - 10){
        c2 += array[count];
        count += 1;
        p2 = count;
    }
    if (count == add){
        add += 20;
        if (min == 0) {
            if (c1 > c2) {
                min = c2;
                minP = p2;
                c1 = 0;
                c2 = 0;
            } else {
                min = c1;
                minP = p1;
                c1 = 0;
                c2 = 0;
            }
        }
        else {
            if (min > c1)
            {
                min = c1;
                minP = p1;
            }
            if (min > c2)
            {
                min = c2;
                minP = p2;
            }
        }
    }
    findMin(array,count,c1,add,c2,min,position,p1,p2,minP);
    return 0;
}
int main() {
    const int len = 100;
    int arr[len]{};
    int random{};
    srand(time(0));
    for (int i = 0; i < len; ++i) {
        random = rand() % 10; // Сделано для удобство(что бы не было очень больших чисел) можно сделать диапоазон и побольше
        arr[i] = random;
    }
    cout << "Massive :" << endl;
    for (int i = 0; i < len; ++i) {  // Что бы выводить массив на экран и видеть все числа
        cout << arr[i] << ' ';
    }
    cout << endl;
    findMin(arr,0,0,20,0,0,0,0,0,0);
    return 0;
}