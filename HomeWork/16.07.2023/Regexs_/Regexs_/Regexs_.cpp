#include <iostream>
#include <string>
#include <regex>
using namespace std;

class User {
private:
	char* name = new char[50];
	char* surname = new char[50];
	uint16_t age{};
	char* phone = new char[50];
	char* login = new char[50];
	char* email = new char[50];
	char* password = new char[50];

public:
	User(char* login, char* email, char* password, uint16_t age, char* name, char* surname, char* phone)
	{
		this->login = login;
		this->email = email;
		this->password = password;
		this->name = name;
		this->surname = surname;
		this->phone = phone;
		this->age = age;

		regex regex_email("^(([a-zA-Z0-9]+)(\\.|_)?([a-zA-Z0-9]+)@([a-zA-Z0-9]+)(\\.|_)?([a-zA-Z0-9])+.([a-zA-Z0-9])+)");
		regex regex_phone("^[+]994[0-9]{9}");

		if (!regex_match(email, regex_email))
			throw invalid_argument("Invalid email");

		if (!regex_match(phone, regex_phone))
			throw invalid_argument("Invalid phone");
	}

	char* toString() {

		char* str = new char[350] {};

		sprintf_s(str, 350, "Name: %s\nSurname: %s\nAge: %d\nLogin: %s\nEmail: %s\nPassword: %s\nPhone: %s", name, surname, age, login, email, password, phone);
		return str;
	}

	void SaveToFile()
	{
		char* name = new char[11] {"Info.txt"};
		FILE* file{};
		fopen_s(&file, name, "w");

		if (file == nullptr) {
			cout << "Error" << endl;
			return;
		}
		fprintf(file, "%s\n", this->toString());
		if (file != nullptr) {
			fclose(file);
		}
	}
};



int main()
{

	char* name = new char[50];
	char* surname = new char[50];
	uint16_t age{};
	char* phone = new char[50];
	char* login = new char[50];
	char* email = new char[50];
	char* password = new char[50];

	cout << "Enter name: ";
	cin.getline(name, 50);
	system("cls");
	cout << "Enter surname: ";
	cin.getline(surname, 50);
	system("cls");
	cout << "Enter age: ";
	cin >> age;
	system("cls");
	cout << "\nExample: +994705555998\nPhone number: ";
	cin.ignore();
	cin.getline(phone, 50);
	system("cls");
	cout << "Enter login: ";
	cin.getline(login, 50);
	system("cls");
	cout << "Enter password: ";
	cin.getline(password, 50);
	system("cls");
	cout << "Enter Email: ";
	cin.getline(email, 50);
	system("cls");

	try
	{
		User n1(login, email, password, age, name, surname, phone);
		n1.SaveToFile();
	}
	catch (exception& ex)
	{
		cout << "Error : " << ex.what();
	}

	return 0;
}
