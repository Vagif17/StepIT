#include <iostream>
using namespace std;
int add(int n1,int n2)
{
    return n1+n2;
}
int subtraction(int n1,int n2)
{
    return  n1-2;
}
int multiply(int n1, int n2){
    return n1*n2;
}
int divide(int n1,int n2){
    return n1/n2;
}
int main() {
    int (*arr[]) (int ,int ) = {add, subtraction, multiply, divide  };
    int choice{};
    int n1{},n2{};
    cout << "Enter first number :";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Choose : \n 1. Add \n 2. Subtraction \n 3. Multiply \n 4. Divide \n";
    cin >> choice;
    cout << arr[choice - 1](n1,n2);
    return 0;
}
