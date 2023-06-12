#include <iostream>
using namespace std;

class Circle {
	float len{};
	float radius{};
	float p = 3.14f;
public:

	Circle() = default;
	
	Circle(float radius) {
		this->radius = radius;
		len = radius * p * 2;
	}

	float getLen()
	{
		return this->len;
	}

	float getRadius()
	{
		return this->radius;
	}

	bool operator>(const Circle& second) const {
		return this->radius > second.radius;
	}

	bool operator<(const Circle& second) const {
		return this->radius < second.radius;
	}

	bool operator==(const Circle& second) const {
		return this->radius == second.radius;
	}

	float operator+=(float newRadius)
	{
	
		return this->radius += newRadius, this->len += (2 * p * newRadius);
	}

	float operator-=(float newRadius)
	{

		return this->radius -= newRadius, this->len -= (2 * p * newRadius);
	}
};

int main()
{
	Circle n1(5);
	Circle n2(2);

	cout << "Comprasion : \n";
	cout << n1.operator>(n2);


	cout << "\nDifference : " << endl;
	cout << n1.operator-=(4);
	return 0;
}