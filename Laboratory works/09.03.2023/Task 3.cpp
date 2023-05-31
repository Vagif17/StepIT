#include <iostream>
using namespace std;

void movement(int arr[2][3], int step, int FinalArr[2][3], int i = 0, int b = 0, int count = 0)
{
	if (i >= 2)
	{
		return;
	}
	if (count == 3)
	{
		i++;
		b = 0;
		count = 0;
	}
	if (count <= 3) {
		if (b - step >= 0) {
			int forLeft = b - step;
			FinalArr[i][forLeft] = arr[i][b];
			b++;
		}
		if (b - step < 0){
			int forLeft = b - step;
			FinalArr[i][forLeft + 4 - 1] = arr[i][b];
			b++;
		}
		count++;
	}

	movement(arr, step, FinalArr, i, b, count);
}

int main()
{
	int FinalArr[2][3]{};
	int array[2][3]{ {1,2,3},{1,2,3} };
	int steps{};
	cout << "Enter steps : ";
	cin >> steps;
	if (steps > 3) {
		steps = steps % 3;
	}
	if (steps != 3 && steps != 0) {
		movement(array, steps, FinalArr);
		cout << endl << "Before:\n";
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t b = 0; b < 3; b++)
			{
				cout << array[i][b] << ' ';
			}
			cout << endl;
		}


		cout << endl << "After: " << endl;
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t b = 0; b < 3; b++)
			{
				cout << FinalArr[i][b] << ' ';
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Numbers will return to start position ";
	}

	return 0;
}
