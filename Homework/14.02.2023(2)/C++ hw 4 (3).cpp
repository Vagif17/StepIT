#include <iostream>
using namespace std;
int main()
{
	int count{},res{};
	while (count <= 1000)
	{
		res = res + count;
		count = count + 1;
	}
	cout << res << endl;
	cout << res / 1000;
	return 0;
}
