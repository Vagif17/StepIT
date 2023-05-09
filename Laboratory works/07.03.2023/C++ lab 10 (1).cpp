#include <iostream>
using namespace std;
int findDegree (int n1,int n2, int n3) {
    if (n2 > 1)
    {
        n1 = n1 * n3;
        n2--;
        findDegree(n1,n2,n3);
    }
    else
    {
        return n1;
    }
}
int main()
{
    int num{},degree{};
    cout << " Enter number : ";
    cin >> num;
    cout << "Enter degree : ";
    cin >> degree;
    cout << findDegree(num,degree,num);
    return 0;
}