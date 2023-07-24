#include <iostream>
using namespace std;

class Student {
private:
	string name{};
	string surname{};
	string fatherName{};
	int* marks = new int [5];
public:
	Student() = default;

	Student(string name, string surname, string fatherName, int* marks)
	{
		this->name = name;
		this->surname = surname;
		this->fatherName = fatherName;
		for (size_t i = 0; i < 5; i++)
		{
			this->marks[i] = marks[i];
		}
	}

	friend ostream& operator <<(ostream& os, Student other)
	{
		os << "Name :" << other.name << "\nSurname : " << other.surname << "\nFather name :" << other.fatherName;
		return os;
	}

};

class Aspirant : public Student
{
private:
	int average{};
	string dataForExam{};
	Student n1{};
public:
	Aspirant() = default;

	Aspirant (string dataForExammarks,int* marks, Student n1){
		this->average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
		this->dataForExam = dataForExam;
		this->n1 = n1;
	}

	friend ostream& operator <<(ostream& os, Aspirant other)
	{
		os << "Average : " << other.average << "\nData of exam : " << other.dataForExam << "\n" << other.n1;
		return os;
	}
};

int main()
{
	int* marks = new int [5]{ 5,5,5,5,5 };
	Student n1_1{ "Vagif","Aliev","Mubariz",marks };
	Aspirant n1{ "12.12.2012",marks,n1_1};
	cout << n1;
	return 0;
}