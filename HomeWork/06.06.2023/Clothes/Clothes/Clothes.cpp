#include <iostream>
using namespace std;


enum TYPE
{
	TSHIRT = 1,
	SWEATER,
	COAT,
	SHORTS,
	JEANS,
	HAT,
	JACKET
};


class Overcoat {
private:
	TYPE type{};
	string brand{};
	uint16_t cost{};

public:
	Overcoat(TYPE type, string brand, uint16_t cost)
	{
		this->type = type;
		this->brand = brand;
		this->cost = cost;
	}

	bool operator ==(const Overcoat& other)
	{
		return this->type == other.type;
	}

	bool operator >(const Overcoat& other)
	{
		if (this->type != this->type)
		{
			cout << "Different type of clothes";
			return 1;
		}
		return this->cost > other.cost;
	}

	bool operator <(const Overcoat& other)
	{
		if (this->type != this->type)
		{
			cout << "Different type of clothes";
			return 1;
		}
		return this->cost < other.cost;
	}

	bool operator =(const Overcoat& other)
	{
		return this->brand = other.brand, this->cost = other.cost, this->type = other.type;
	}

	friend  ostream& operator <<(ostream& os, const Overcoat& other)
	{

		os << "Type : ";
		switch (other.type)
		{
		case TSHIRT:
		{
			os << "T-shirt";
			break;
		}

		case SWEATER:
		{
			os << "Sweater";
			break;
		}

		case COAT:
		{
			os << "Coat";
			break;
		}

		case JACKET:
		{
			os << "Jacket";
			break;
		}

		case HAT:
		{
			os << "Hat";
			break;
		}

		case JEANS:
		{
			os << "Jeans";
			break;
		}

		case SHORTS:
		{
			os << "Shorts";
			break;
		}
		}
		os << "\tBrand : " << other.brand << "\tCost : " << other.cost;
		return os;
	}
};

int main()
{
	Overcoat n1{ TSHIRT,"Nike",50 };
	Overcoat n2{ HAT,"Addidas",50 };

	cout << n1;
	cout << endl;
	cout << n2;
	if ((n1 == n2) == 1)
	{
		cout << endl << endl;
		cout << "First clothes and Second clothes have same type";
	}

	else
	{
		cout << "First clother and Second clothes are different";
	}

	if ((n1 > n2) == 1)
	{
		cout << endl << endl;
		cout << "First clothes more expensive than Second";
		cout << endl;
	}


	if ((n1 < n2) == 1)
	{
		cout << endl << endl;
		cout << "Second clothes more expensive than First";
	}

	if ((n1 < n2) == 0 && ((n1 > n2)) == 0)
	{
		cout << endl << endl;
		cout << "First clothes and Second have same cost" << endl;;
	}

	n1 = n2;

	cout << n1 << endl; //Демонстрация оператора присваивания;
	return 0;
}