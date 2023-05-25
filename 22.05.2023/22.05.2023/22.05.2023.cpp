#include <iostream>
using namespace std;
class student {
private:
	uint16_t day{};
	uint16_t month{};
	uint16_t year{};

public:
	student() = default;

	void setData(uint16_t day, uint16_t month, uint16_t year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void getData()
	{
		cout << endl << "Data : " << this->day << '.' << this->month << '.' << this->year ;
	}

	string name{};
	string surname{};
	string fatherName{};
	string country{};
	string city{};
	string phoneNumber{};
	string school{};

	void setInfo(string name, string surname, string fatherName, string country, string city, string phoneNumber, string school)
	{
		this->name = name;
		this->surname = surname;
		this->fatherName = fatherName;
		this->country = country;
		this->city = city;
		this->phoneNumber = phoneNumber;
		this->school = school;
	}
};

int main()
{
	student p1{};
	p1.setData(5, 12, 2023);
	p1.setInfo("Vagif", "Aliev", "Mubariz", "Azerbaijan", "Baku", "+994705555998", "8");
	cout << "Name : " << p1.name << "\nSurname : " << p1.surname << "\nFathername : " << p1.fatherName << "\nCountry : " << p1.country << "\nCity : " << p1.city << "\nPhone number : " << p1.phoneNumber << "\nSchool : " << p1.school;	
	p1.getData();
	return 0;
}
