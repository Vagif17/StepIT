#include <iostream>
using namespace std;
struct student {
    char *name = new char[20]{};
    char *surname = new char[20]{};
    char *fatherName = new char[20]{};
    bool *marks = new bool [20]{};

    student() {
        name = new char[]{"Vagif"};
        surname = new char[]{"Aliev"};
        fatherName = new char[]{"Mubariz"};
        marks = new bool []{1,1,1,1,1,1,1,1,1,1};
    }

    student(char* _name,char* _surname,char* _fathername,bool* _marks){
        name = _name;
        surname = _surname;
        fatherName = _fathername;
        for (int i = 0; i < 10; ++i) {
            marks[i] = _marks[i];
        }
    }

    void view() {
        cout << "\t\t\t\t\t Student information.\n";
        cout << "\t\t\t\tSurname :  " << surname << "\n\t\t\t\tName : " << name << "\n\t\t\t\tFather's name : "
             << fatherName;
        int count{};
        for (int i = 0; i < 10; ++i) {
            count += marks[i];
        }
        float average = count / 10.f;
        cout << "\n\t\t\t\tAverage marks : " << average;
        cout << endl;
    }

};

student createPerson(){
    char* name = new char [20]{};
    char* surname = new char[20]{};
    char* fatherName = new char[20]{};
    bool* marks = new bool [10]{};

    cout << "Enter name :";
    cin.getline(name,20);

    cout << "Enter surname :";
    cin.getline(surname, 20);

    cout << "Enter father's name :";
    cin.getline(fatherName, 20);

    cout << "Enter marks : \n";
    for (int i = 0; i < 10; ++i) {
        cin >> marks[i];
    }

    student *person = new student(name,surname,fatherName,marks);
    return *person;
}
int main() {
    student p1; // В начале показывает характеристику первого уже созданного студента.
    cout << "Student number -1" << endl;
    p1.view();
    int len{};
    cout << "Enter amount of student : ";
    cin >> len;
    student *persons = new student[len];
    for (int i = 0; i < len ; ++i) {
        getchar();
        persons[i] = createPerson();
    }
    cout << endl;
    cout << "Student number -1" << endl;
    p1.view();
    cout << endl;
    for (int i = 0 ; i < len ; ++i) {
        cout << "Student number :" << i  << endl;
        persons[i].view();
    }
    int choose{};
    cout << "Enter student number to see marks :";
    cin >> choose;
    if (choose == -1)
    {
        cout << p1.surname << " " << p1.name << " " << p1.surname << endl << "Marks :" << endl;
        for (int i = 0; i < 10; ++i) {
            cout << p1.marks[i] << " ";
        }
    } else
        cout << persons[choose].surname << " " << persons[choose].name << " " << persons[choose].fatherName << " " << "\n Marks :" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << persons[choose].marks[i] << " ";
    }
    return 0;
}