#include <iostream>
using namespace std;
int main()
{
    const int length = 5;
	int array[length]{ 1,2,3,4,5 };
	for (size_t i = length - 1; i != -1; i--)
	{
		cout << array[i] << endl;
	}
	return 0;
}
