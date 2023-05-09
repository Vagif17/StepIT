#include <iostream>
using namespace std;
struct animals{
    char* name = new char [40]{};
    int age{};
    int gender{};

};

struct zoo{
    char* name = new char [40]{};
    int maxAnimals{};
    int animalsNow{};
    animals* animalsInZoo{};

};

zoo createZoo(){
    zoo tmp{};
    cout << "Enter name of zoo : ";
    cin.getline(tmp.name, 40);

    cout << "Enter max animal : ";
    cin >> tmp.maxAnimals;

    tmp.animalsInZoo = new animals [tmp.maxAnimals]{};
    return tmp;
}

animals createAnimal(){
    animals tmp{};
    cin.ignore();
    cout << "Enter name of animal : ";
    cin.getline(tmp.name, 40);

    cout << "Enter age of animal : ";
    cin >> tmp.age;

    cout << "Enter gender (0 if male, 1 if female : )";
    cin >> tmp.gender;

    return tmp;
}

void view(char* _name, int _age, int _gender){
    cout << "Name of animal : " <<_name;
    cout << "\nAge : " << _age;
    if (_gender == 0)
    {
        cout << "\nGender : Male ";
    } else cout << "\nGender : Female";
}
int main() {
    int count{};
    zoo *park = new zoo[1]{};
    park[0] = createZoo();
    int choose{};
    for (int i = 0; i < park->maxAnimals; ++i)
    {
        cout << "Enter 0 for end  and 1 for add animal :";
        cin >> choose;
        if (choose == 0)
        {
            break;
        }
        else
        {
            park->animalsInZoo[i] = createAnimal();
            park->animalsNow++;
        }
    }

    int doing{};
    cout << "If you want end app enter 10" << endl;
    cout << "1.View all animals\n2.Edit animal\n3.Delete \n :";
    cin >> doing;
    while (true) {
        switch (doing) {
            case 10:
            {
                return 0;
            }
            case 1: {
                cout << endl;
                cout << "Zoo : " << park->name << endl << "Max animals : " << park->maxAnimals << endl
                     << "Amount of animals now : " << park->animalsNow << endl << "Animals : " << endl << endl;
                for (int i = 0; i < park->animalsNow; ++i) {
                    view(park->animalsInZoo[i].name, park->animalsInZoo[i].age, park->animalsInZoo[i].gender);
                    cout << endl << endl;
                }
                cout << "If you want end app enter 10" << endl;
                cout << "1.View all animals\n2.Edit animal\n3.Delete \n :";
                cin >> doing;
                break;
            }

            case 2: {
                for (int i = 0; i < park->animalsNow; ++i) {
                    cout << "Index of animal - " << i << endl;
                    view(park->animalsInZoo[i].name, park->animalsInZoo[i].age, park->animalsInZoo[i].gender);
                    cout << endl << endl;
                }
                int indForEdit{};
                cout << "Choose animal to edit : ";
                cin >> indForEdit;

                cin.ignore();

                cout << "Enter new name :";
                cin.getline(park->animalsInZoo[indForEdit].name, 40);

                cout << "Enter new age :";
                cin >> park->animalsInZoo[indForEdit].age;

                cout << "Enter new gender (Enter 0 if male,1 if female) :";
                cin >> park->animalsInZoo[indForEdit].gender;
                cout << "If you want end app enter 10" << endl;
                cout << "1.View all animals\n2.Edit animal\n3.Delete \n :";
                cin >> doing;
                break;
            }
            case 3:{
                for (int i = 0; i < park->animalsNow; ++i) {
                    cout << "Index of animal - " << i << endl;
                    view(park->animalsInZoo[i].name, park->animalsInZoo[i].age, park->animalsInZoo[i].gender);
                    cout << endl << endl;
                }
                int indForDelete{};
                cout << "Choose animal to delete : ";
                cin >> indForDelete;
                animals* tmp = new animals [park->maxAnimals - 1];
                int ind{};
                for (int i = 0; i < park->maxAnimals - 1; ++i) {
                    if (i == indForDelete)
                    {
                        tmp[ind] = park->animalsInZoo[ind + 1];
                        ind++;
                    } else{
                        tmp[ind] = park->animalsInZoo[ind];
                    }
                }

                delete park->animalsInZoo;
                park->animalsInZoo = new animals [park->maxAnimals - 1];

                for (int i = 0; i < park->maxAnimals - 1; ++i) {
                    park->animalsInZoo[i] = tmp[i];
                }

                park->animalsNow -= 1;
                cout << "If you want end app enter 10" << endl;
                cout << "1.View all animals\n2.Edit animal\n3.Delete \n :";
                cin >> doing;
            }
        }
    }
    return 0;
}
