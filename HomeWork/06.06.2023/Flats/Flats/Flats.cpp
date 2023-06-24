#include <iostream>
using namespace std;

class Flat {
private:
	uint16_t area{};
	uint16_t cost{};
public:
	Flat(uint16_t area, uint16_t cost)
	{
		this->area = area;
		this->cost = cost;
	}

	bool operator >(const Flat& other)
	{
		if (this->area == other.area)
		{
			return this->cost > other.cost;
		}

		else
		{
			cout << "Area of flats are different" << endl;
			return 0;
		}
	}

	bool operator <(const Flat& other)
	{
		if (this->area == other.area)
		{
			return this->cost < other.cost;
		}

		else
		{
			cout << "Area of flats are different" << endl;
			return 0;
		}
	}

	bool operator ==(const Flat& other)
	{
		return this->area == other.area;
	}

	bool operator =(const Flat& other)
	{
		return this->area = other.area, this->cost = other.cost;
	}

	friend ostream& operator <<(ostream& os, const Flat& other)
	{
		os << "Area : " << other.area << "\tCost : " << other.cost;
		return os;
	}
};

int main()
{
	Flat n1{ 100,40 };
	Flat n2{ 100,10 };

	cout << n1 << endl << n2 << endl;

	if ((n1 == n2))
	{
		cout << "Area of flats are the same" << endl;
	}

	if ((n1 > n2) && (n1 == n2))
	{
		cout << "First flat are more expensive than second " << endl;
	}

	if ((n1 < n2) && (n1 == n2))
	{
		cout << "Second flat ara more expensive than first" << endl;
	}

	if (!(n1 > n2)  && !(n1 < n2) && (n1 == n2))
	{
		cout << "First and second flat's costs are the same" << endl;
	}

	n1 = n2; // Демонстрация присваивания
	cout << n1;
	return 0;
}
