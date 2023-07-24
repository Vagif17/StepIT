#include <iostream>
using namespace std;

class Transport {
private:
	uint16_t km_h{};
	string typeOfTransport{};
	uint16_t wheels{};
	uint16_t passenger_Max{};
public:
	Transport() = default;

	Transport(uint16_t km_h, string typeOfTransport, uint16_t wheels, uint16_t passenger_max)
	{
		this->km_h = km_h;
		this->typeOfTransport = typeOfTransport;
		this->wheels = wheels;
		this->passenger_Max = passenger_Max;
	}
	
	virtual void move(uint16_t distance) = 0;
};


class Car : public Transport {
private:
	uint16_t km_h{};
	string mark{};
	string model{};
	uint16_t price_per_hour = 5;
public:
	Car() = default;
	
	Car(string mark, string model, uint16_t km_h, string typeOfTransport, uint16_t wheels, uint16_t max_passenger) : Transport(km_h, typeOfTransport, wheels, max_passenger)
	{
		this->mark = mark;
		this->model = model;
		this->km_h = km_h;
	}

	void move( uint16_t distance) override
	{
		cout << "\nHours before finish : " << distance / km_h;
		cout << "\nPrice : " << (distance / km_h) * price_per_hour;
	}

	friend ostream& operator <<(ostream& os, Car other)
	{
		os << "\nMark :" << other.mark << "\tModel : " << other.model << "\tKm/h : " << other.km_h;
		return os;
	}
};


class Bicycle : public Transport {
private:
	uint16_t km_h{};
	string mark{};
	string model{};
	uint16_t price_per_hour = 2;
public:
	Bicycle() = default;

	Bicycle(string mark, string model, uint16_t km_h, string typeOfTransport, uint16_t wheels, uint16_t max_passenger) : Transport(km_h, typeOfTransport, wheels, max_passenger)
	{
		this->mark = mark;
		this->model = model;
		this->km_h = km_h;
	}

	void move(uint16_t distance) override
	{
		cout << "\nHours before finish : " << distance / km_h;
		cout << "\nPrice : " << (distance / km_h) * price_per_hour;
	}

	friend ostream& operator <<(ostream& os, Bicycle other)
	{
		os << "\nMark :" << other.mark << "\tModel : " << other.model << "\tKm/h : " << other.km_h;
		return os;
	}
};


class Ñart : public Transport {
private:
	uint16_t km_h{};
	string mark{};
	string model{};
	uint16_t price_per_hour = 2;
public:
	Ñart() = default;

	Ñart(string mark, string model, uint16_t km_h, string typeOfTransport, uint16_t wheels, uint16_t max_passenger) : Transport(km_h, typeOfTransport, wheels, max_passenger)
	{
		this->mark = mark;
		this->model = model;
		this->km_h = km_h;
	}

	void move(uint16_t distance) override
	{
		cout << "\nHours before finish : " << distance / km_h;
		cout << "\nPrice : " << (distance / km_h) * price_per_hour;
	}

	friend ostream& operator <<(ostream& os, Ñart other)
	{
		os << "\nMark :" << other.mark << "\tModel : " << other.model << "\tKm/h : " << other.km_h;
		return os;
	}
};


int main()
{
	Car n1{ "BMW","M8",60,"Car",4,2 };
	cout << n1;
	n1.move(180);

	Bicycle n2("Merida", "Big.Nine", 10, "Bicycle", 2, 1);
	cout << endl << n2;
	n2.move(50);

	Ñart n3{ "Berline","1",5,"Cart",4,6 };
	cout << endl << n3;
	n3.move(20);
	
	return 0;
}
