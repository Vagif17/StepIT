#include <iostream>
using namespace std;


class Passport {
private:
    string name{};
    string surname{};
    string fatherName{};
    string eyecolor{};
    string height{};
    string birthDate{};
public:
    Passport() = default;

    Passport(string name, string surname, string fatherName, string eyecolor, string height, string birthDate)
    {
        this->name = name;
        this->surname = surname;
        this->fatherName = fatherName;
        this->eyecolor = eyecolor;
        this->birthDate = birthDate;
        this->height = height;
    }

    friend ostream& operator << (ostream& os, Passport other)
    {
        os << "Name : " << other.name << "\tSurname : " << other.surname << "\t\tFather Name : " << other.fatherName
            << "\tBirth Date : " << other.birthDate << "\nEye color : " << other.eyecolor << "\tHeight : " << other.height;
        return os;
    }
};


class ForeignPassport : public Passport {
private:
    string ID{};
    string visa{};
    Passport p1{};
public:
    ForeignPassport() = default;

    ForeignPassport(string ID, string visa, Passport p1)
    {
        this->ID = ID;
        this->visa = visa;
        this->p1 = p1;
    }

    friend ostream& operator << (ostream& os, ForeignPassport p1)
    {
        os << p1.p1 << "\nID : " << p1.ID << "\tVisa : " << p1.visa;
        return os;
    }
};

int main()
{
    Passport p1{ "Vagif","Aliev","Mubariz","Brown","183","17.04.2007" };
    ForeignPassport p1_1{ "15155566194","Tourist",p1 };
    cout << p1_1;
    return 0;
}
