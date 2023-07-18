#include <iostream>
using namespace std;

class OutOfRangeException : public exception {
public:
	const char* what() const throw() override {
		return "Stack is full";
	}
};

class SimpleNumException : public exception {
public:
	const char* what() const throw() override {
		return "Number is simple";
	}
};

class MyVector
{
private:
	int* arr{};
	size_t capacity{};
	size_t size{};
	size_t maxCapacity = 10;
public:
	~MyVector() {
		delete[] arr;
	}

	MyVector(initializer_list<int> list) {
		this->size = list.size();
		this->capacity = list.size() * 2;
		this->arr = new int[capacity]{};

		for (const int* i = list.begin(); i < list.end(); i++) {
	
			for (size_t j = 2; j < *i; j++)
			{
				if (*i % j == 0 && j != *i)
				{
					throw SimpleNumException();
				}
				else
				{
					this->arr[i - list.begin()] = *i;

				}
			}
			this->arr[i - list.begin()] = *i;
		}
	}

	MyVector(size_t size) {
		this->size = size;
		this->capacity = size * 2;
		this->arr = new int[capacity]{};
	}


	void push_back(int addNum)
	{
		if (this->size == this->capacity)
		{
			if (capacity * 2 >= maxCapacity)
			{
				throw OutOfRangeException();
			}
			this->capacity *= 2;
			int* tmpArr = new int[this->capacity];

			for (size_t i = 0; i < this->size; i++)
			{
				tmpArr[i] = arr[i];
			}

			delete[]this->arr;

			this->arr = tmpArr;

		}

		arr[this->size] = addNum;
		this->size++;
	}


	friend ostream& operator<<(ostream& out, const MyVector& vector) {
		for (size_t i = 0; i < vector.size; i++) {
			out << vector.arr[i] << ' ';
		}
		return out;
	}

};


int main()
{
	

	try
	{
		MyVector vector1({ 1,2,3,4,5 });
	}
	catch (exception& error)
	{
		cout << "Error first vector : " << error.what() << endl;
	}

	try
	{
		MyVector vector2({ 1,2,5 });
		vector2.push_back(5);
		vector2.push_back(6);
		vector2.push_back(7);
		vector2.push_back(8);
		vector2.push_back(9);
		vector2.push_back(10);
		vector2.push_back(11);
		vector2.push_back(12);

	}
	catch (exception& error)
	{
		cout << "Error second vector : " << error.what() << endl;
	}
	return 0;
}
