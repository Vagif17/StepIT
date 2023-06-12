#include <iostream>
using namespace std;

class AirPlane {
private:
	string model;
	uint16_t maxPassenger;
	uint16_t passenger;
public:
	void setParametr(const string model, uint16_t maxPassenger, uint16_t passenger)
	{
		this->model = model;
		this->maxPassenger = maxPassenger;
		this->passenger = passenger;
	}

	bool operator>(const AirPlane& other) const {
		return this->maxPassenger > other.maxPassenger;
	}

	bool operator<(const AirPlane& other) const {
		return this->maxPassenger < other.maxPassenger;
	}

	bool operator==(const AirPlane& other) const {
		return this->model == other.model;
	}

	void operator++() {
		this->passenger++;
	}

	void operator--() {
		this->passenger--;
	}

	friend ostream& operator << (ostream& os, const AirPlane& p1)
	{
		os << "Model : " << p1.model << "\tMax Passenger : " << p1.maxPassenger << "\tPassenger Now : " << p1.passenger;
		return os;
	}

	void showModel()
	{
		cout << this->model;
	}
};

int main()
{
	AirPlane p1{};
	AirPlane p2{};

	p1.setParametr("Boieng", 50, 25); // Можно изменить что бы удостовериться что всё работает.
	p2.setParametr("Boieng", 50, 25);

	if (p1 == p2)
	{
		cout << "There are same Air Planes ";
	}

	else
	{
		if (p1 > p2)
		{
			cout << "Max passenger in ";
			p1.showModel();
			cout << " > Max passenger in ";
			p2.showModel();
		}

		if (p1 < p2)
		{
			cout << "Max passenger in ";
			p1.showModel();
			cout << " < Max passenger in ";
			p2.showModel();
		}
	}

	cout << endl << "\nOperator -- with p1 :\n";
	--p1;
	cout << p1;

	cout << endl << "\nOperator ++ with p2 :\n";
	++p2;
	cout << p2;
	cout << endl;
	return 0;
}
