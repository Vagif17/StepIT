#include <iostream>
using namespace std;
int binarSearch(int n1[],int n2,int index,int l1)
{
   if (n1[l1 / 2] > n2) {
       index = l1 / 2 - 1;
       if (n1[index] == n2)
       {
           cout << "Your index: " << index;
           return 0;
       }
       else
       {
           index = l1 - 1;
           l1 = l1 - 1;
       }
   }
   if (n1[l1 / 2] < n2){
        index = l1 / 2 + 1;
        if (n1[index] == n2)
        {
            cout << "Your index: " << index;
            return 0;
        }
        else
        {
            index = l1 + 1;
            l1 = l1 + 1;
        }
   }
    binarSearch(n1,n2,index,l1);

}
int main() {
    const int len = 10;
    int arr[len]{2,7,9,11,15,17,20,22,25,27};
    int num{};
    cout << "Enter number :";
    cin >> num;
    binarSearch(arr,num,0,len);
    return 0;
}