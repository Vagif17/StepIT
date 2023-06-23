#include <iostream>
#include "string.h"

using namespace std;

class student {
private:
    string name{};
    string surname{};
    string birthDate{};
    uint16_t GPA{};

public:
    student() = default;

    student(const string name, const string surname, const string birthDate, int GPA)
    {
        this->name = name;
        this->surname = surname;
        this->birthDate = birthDate;
        this->GPA = GPA;
    }

    uint16_t getGPA()
    {
        return GPA;
    }

    bool operator >(const student& other)
    {
        return this->GPA > other.GPA;
    }

    bool operator <(const student& other)
    {
        return this->GPA < other.GPA;
    }

    bool operator !=(const student& other)
    {
        return this->GPA != other.GPA;
    }

    bool operator ==(const student& other)
    {
        return this->GPA == other.GPA;
    }


    friend ostream& operator <<(ostream& os, const student& other)
    {
        os << '\t' << "Name : " << other.name << '\t' << "Surname : " << other.surname << "\t\t" << "Birth date : " << other.birthDate << "\t\t" << "GPA : " << other.GPA;
        return os;
    }

    friend istream& operator >>(istream& is,  student& other)
    {
        is >> other.name >> other.surname >> other.birthDate >> other.GPA;
        return is;
    }
};

class classroom
{
private:
    student* all = new student[33];
    string classNumber{};
    int index{};
public:
    classroom() = default;

    classroom(string classNumber)
    {
        this->classNumber = classNumber;
    }

    void add(const student& person)
    {
        if (index == 32)
        {
            cout << "Class is fool\n\n";
            return;
        }
        this->all[index] = person;
        index++;
    }

    int getPersons()
    {
        return index + 1;
    }

    bool operator >(const classroom& other)
    {
        return this->index > other.index;
    }

    bool operator <(const classroom& other)
    {
        return this->index < other.index;
    }

    bool operator ==(const classroom& other)
    {
        return this->index == other.index;
    }

    bool operator !=(const classroom& other)
    {
        return this->index != other.index;
    }



    friend ostream& operator <<(ostream& os, const classroom& room)
    {
        os << "\t\t\t\t\t    " << room.classNumber << "\n\t\t\t\t\tStudents : \n";
        for (size_t i = 0; i < room.index; i++)
        {
            os << endl;
            os << room.all[i];
        }

        return os;
    }

    friend istream& operator >>(istream& is,  classroom& room)
    {
        is >> room.classNumber;
        return is;
    }


};


int main()
{
    student n1("Vagif", "Aliev", "17.04.2007", 5);
    student n2("Ibragim", "Aliev", "22.05.2008", 2);
    student n3;
    
    classroom room("9c");
    classroom room1;

    cout << "\nEnter Name,Surname,Birth Date,GPA :\n";
    cin >> n3;
    
    cout << "\nEnter classroom numbers :\n ";
    cin >> room1;
    
    room.add(n1);
    room.add(n2);

    room1.add(n2);
    room1.add(n3);

    cout << room << endl;

    cout << room1 << endl;

    cout << "Exapmle of operators : \n";
    cout << endl << room.getPersons() << " > " << room1.getPersons() << " = " << (room > room1);
    cout << endl << room.getPersons() << " < " << room1.getPersons() << " = " << (room < room1);
    cout << endl << room.getPersons() << " != " << room1.getPersons() << " = " << (room != room1);
    cout << endl << room.getPersons() << " == " << room1.getPersons() << " = " << (room == room1);
    
    cout << endl << endl << n1.getGPA() << " > " << n2.getGPA() << " = " << (n1 > n2);
    cout << endl << n1.getGPA() << " < " << n2.getGPA() << " = " << (n1 < n2);
    cout << endl << n1.getGPA() << " != " << n2.getGPA() << " = " << (n1 != n2);
    cout << endl << n1.getGPA() << " == " << n2.getGPA() << " = " << (n1 == n2);

    return 0;
}
