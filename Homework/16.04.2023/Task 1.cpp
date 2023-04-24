#include <iostream>
using namespace std;
struct book{
    char* name = new char [30]{};
    char* author = new char [30]{};
    char* genre = new char [30]{};
    char* publishingHouse = new char [30]{};
    void print(){
        cout << "Book : " << name << endl;
        cout << "Author : " << author << endl;
        cout << "Genre : " << genre << endl;
        cout << "Publishing house : " << publishingHouse << endl;
    }
};



book addBook(){
    book n1;

    cout << "Enter name of book : ";
    cin.getline(n1.name, 30);

    cout << "Enter author of book : ";
    cin.getline(n1.author, 30);

    cout << "Enter genre of book : ";
    cin.getline(n1.genre, 30);

    cout << "Enter publishing house of book : ";
    cin.getline(n1.publishingHouse, 30);

    return n1;
};

void edit(book*& arr,int index,book newBook)
{
    arr[index] = newBook;
    newBook.print();
}

void sortByName (book*& array){
    book *SortedByName = new book[10]{};
    int index{};
    for (int i = 65; i < 90; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (array[j].name[0] == i || array[j].name[0] == i + 32) {
                SortedByName[index] = array[j];
                index++;
                cout << endl;
            }
        }
    }
    delete array;
    for (int i = 0; i < 10; ++i) {
        array[i] = SortedByName[i];
    }
    for (int i = 0; i < 10; ++i) {
        array[i].print();
        cout << endl;
    }
}


void sortByAuthor (book*& array){
    book *SortedByAuthor = new book[10]{};
    int index{};
    for (int i = 65; i < 90; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (array[j].author[0] == i || array[j].author[0] == i + 32) {
                SortedByAuthor[index] = array[j];
                index++;
                cout << endl;
            }
        }
    }
    delete array;
    for (int i = 0; i < 10; ++i) {
        array[i] = SortedByAuthor[i];
    }
    for (int i = 0; i < 10; ++i) {
        array[i].print();
    }
}


void sortByPublishingHouse (book*& array){
    book *SortedPublishingHouse = new book[10]{};
    int index{};
    for (int i = 65; i < 90; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (array[j].publishingHouse[0] == i || array[j].publishingHouse[0] == i + 32) {
                SortedPublishingHouse[index] = array[j];
                index++;
                cout << endl;
            }
        }
    }
    delete array;
    for (int i = 0; i < 10; ++i) {
        array[i] = SortedPublishingHouse[i];
    }
    for (int i = 0; i < 10; ++i) {
        array[i].print();
        cout << endl;
    }
}
int main() {
    book *array = new book[10]{};
    int count{};
    while (count != 1) {
        array[count] = addBook();
        cout << endl;
        count++;
    }
    int choice{};
    while (choice != 8) {
        cout << "1.Edit book \n2.Show All book \n3.Search books by author \n4.Search books by book names\n"
                "5.Sorting an array by book title\n6.Sorting an array by author\n7.Search an array by publishing house\n8.End  ";
        cin >> choice;
        switch (choice) {
            case 1: {
                for (int i = 0; i < 10; ++i) {
                    cout << "Book number : " << i << endl;
                    array[i].print();
                    cout << endl;
                }
                int bookNum{};
                cout << "Enter number of book for change :";
                cin >> bookNum;
                book nChange{};
                cin.ignore();
                cout << "Enter name of book: ";
                cin.getline(nChange.name, 30);

                cout << "Enter author of book: ";
                cin.getline(nChange.author, 30);

                cout << "Enter genre of book: ";
                cin.getline(nChange.genre, 30);

                cout << "Enter publishing house : ";
                cin.getline(nChange.publishingHouse, 30);

                edit(array, bookNum, nChange);
                break;

            }
            case 2: {
                for (int i = 0; i < 10; ++i) {
                    array[i].print();
                    cout << endl;
                }
                break;
            }
            case 3: {
                cin.ignore();
                char *tmp = new char[30]{};
                int *word{};
                cout << "Enter author :";
                cin.getline(tmp, 30);
                int len{};
                while (tmp[len] != '\0') {
                    len++;
                }
                word = new int[len]{};
                for (int i = 0; i < len; ++i) {
                    word[i] = tmp[i];
                }
                for (int i = 0; i < 10; ++i) {
                    int correct{};
                    for (int j = 0; j < len; ++j) {
                        if (array[i].author[j] == word[j]) {
                            correct++;
                        } else break;
                    }
                    if (correct == len) {
                        array[i].print();
                        cout << endl;
                    }
                }
                break;
            }
            case 4: {
                cin.ignore();
                char *tmp = new char[30]{};
                int *bookInt{};
                cout << "Enter book :";
                cin.getline(tmp, 30);
                int len{};
                while (tmp[len] != '\0') {
                    len++;
                }
                bookInt = new int[len]{};
                for (int i = 0; i < len; ++i) {
                    bookInt[i] = tmp[i];
                }
                for (int i = 0; i < 10; ++i) {
                    int correct{};
                    for (int j = 0; j < len; ++j) {
                        if (array[i].name[j] == bookInt[j]) {
                            correct++;
                        } else break;
                    }
                    if (correct == len) {
                        array[i].print();
                        cout << endl;
                    }
                }
                break;
            }
            case 5: {
                sortByName(array);
                cout << endl;
                break;
            }
            case 6:{
                sortByAuthor(array);
                cout << endl;
                break;
            }

            case 7:{
                sortByPublishingHouse(array);
                cout << endl;
                break;
            }
            case 8:{
                return 0;
            }
        }

    }
    return 0;
}