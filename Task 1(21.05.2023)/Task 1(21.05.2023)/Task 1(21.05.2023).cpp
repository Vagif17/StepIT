#include <iostream>
#include <string>
using namespace std;

class info {
private:
	char* birthDate = new char[40];

public:
	char* name = new char[40];
	char* surname = new char[40];
	char* fathername = new char[40];
	char* workNumber = new char[40];
	char* mobileNumber = new char[40];
	char* Gmail = new char[40];
	info() = default;

	void setDate(char* birthDate) {
		this->birthDate = birthDate;
	}

	void showAll()
	{
		cout << "\nName : " << this->name;
		cout << "\nSurname : " << this->surname;
		cout << "\nFather name : " << this->fathername;
		cout << "\nWork number : " << this->workNumber;
		cout << "\nMobile number : " << this->mobileNumber;
		cout << "\nGmail : " << this->Gmail;
		cout << "\nBirth date : " << this->birthDate;
	}

	~info()
	{
		delete[] this->name;
		delete[] this->surname;
		delete[] this->fathername;
		delete[] this->workNumber;
		delete[] this->mobileNumber;
		delete[] this->Gmail;
		delete[] this->birthDate;
	}

	char* toString() {


		char* str = new char[1000] {}; 

		sprintf_s(str, 1000, "Name: %s\nSurname: %s\nFather name: %s\nWork number: %s\nMobile number : %s \nGmail : %s \nBirth date : %s", name, surname, fathername, workNumber, mobileNumber, Gmail, birthDate);
		return str;
	}
};


void saveToFile(info* info,int times)
{

	FILE* file{};
	fopen_s(&file, "StudentList.txt", "w");

	for (size_t i = 0; i < times ; i++)
	{
		fprintf(file, "%s\n", info[i].toString());
		
	}
	if (file != nullptr) {
		fclose(file);
	}

}

void loadFromFile()
{
	FILE* file{};
	fopen_s(&file, "StudentList.txt", "r");
	if (file == nullptr) {
		cout << "Error" << endl;
		return;
	}

	char* tmpStr = new char[1000];
	while (!feof(file)) { 
		fgets(tmpStr, 1000, file); 
		cout << tmpStr;
	}
}



int main()
{
	info* list = new info[10]{};
	int choice = 10;
	int index{};
	while (choice != 0)
	{


		cout << "\nEnter choice :  \n1.Add person \n2.Delete person \n3.Find by FIO \n4.Show All person \n5.Save to file \n6.Download from file \n0.End   \n:";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cin.ignore();
			char* tmp = new char[40];
			cout << "Enter name : ";
			cin.getline(list[index].name, 40);

			cout << "Enter surname : ";
			cin.getline(list[index].surname, 40);

			cout << "Enter fathername : ";
			cin.getline(list[index].fathername, 40);

			cout << "Enter work number : ";
			cin.getline(list[index].workNumber, 40);

			cout << "Enter mobile number : ";
			cin.getline(list[index].mobileNumber, 40);

			cout << "Enter Gmail : ";
			cin.getline(list[index].Gmail, 40);

			cout << "Enter birth date : ";
			cin.getline(tmp, 40);
			list[index].setDate(tmp);
			index++;
			break;
		}

		case 2:
		{
			int indForDel{};
			if (index == 0)
			{
				cout << "\n List is empty \n";
				break;
			}
			cout << '\n';
			for (size_t i = 0; i < index; i++)
			{
				cout << "\nIndex : " << i;
				list[i].showAll();
				cout << endl;
			}
			cout << "\n\nEnter index for delete : ";
			cin >> indForDel;

			list[indForDel].~info();
			index--;
			break;
		}

		case 3:
		{
			cin.ignore();
			char* nameToFind = new char[40];
			char* surnameToFind = new char[40];
			char* fatherNameToFind = new char[40];
			int correct{};
			cout << "Enter name to find : ";
			cin.getline(nameToFind, 40);

			cout << "Enter surname to find : ";
			cin.getline(surnameToFind, 40);

			cout << "Enter father name to find : ";
			cin.getline(fatherNameToFind, 40);

			for (size_t i = 0; i < index; i++)
			{
				correct = 0;
				if (list->name = nameToFind)
				{
					correct++;
				}

				if (list->surname = surnameToFind)
				{
					correct++;
				}

				if (list->fathername = fatherNameToFind)
				{
					correct++;
				}

				if (correct == 3)
				{
					cout << endl;
					list->showAll();
				}
			}

			break;
		}

		case 4:
		{
			if (index == 0)
			{
				cout << "\n List is empty \n";
				break;
			}
			for (size_t i = 0; i < index; i++)
			{
				list[i].showAll();
			}
			break;
		}

		case 5:
		{
			saveToFile(list,index);
			break;
		}

		case 6:
		{
			cout << "In file : \n";
			loadFromFile();
			break;
		}
		
		}


	}
	return 0;
}