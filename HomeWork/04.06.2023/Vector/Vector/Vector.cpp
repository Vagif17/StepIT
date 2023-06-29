#include <iostream>
using namespace std;


template<typename T>
class MyVector
{
private:
	T* arr{};
	size_t capacity{};
	size_t size{};
public:
	~MyVector() {
		delete[] arr;
	}

	MyVector(initializer_list<int> list) {
		this->size = list.size();
		this->capacity = list.size() * 2;
		this->arr = new T[capacity]{};

		for (const T* i = list.begin(); i < list.end(); i++) {
			this->arr[i - list.begin()] = *i;
		}
	}

	MyVector(size_t size) {
		this->size = size;
		this->capacity = size * 2;
		this->arr = new T[capacity]{};
	}

	void show()
	{
		if (size == 0)
		{
			cout << "Array is empty";
			return;
		}
		for (size_t i = 0; i < this->size; i++)
		{
			cout << this->arr[i];
		}
	}

	void push_back(T addNum)
	{
		if (this->size == this->capacity)
		{
			this->capacity *= 2;
			T* tmpArr = new T[this->capacity];

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

	void pop_back()
	{
		T* tmpArr = new T[this->capacity];

		for (size_t i = 0; i < this->size - 1; i++)
		{
			tmpArr[i] = arr[i];
		}

		delete[] arr;

		arr = tmpArr;

		this->size--;
	}

	size_t Size()
	{
		return this->size;
	}

	bool empty()
	{
		if (size <= 0)
		{
			return 0;
		}
		if (size > 0)
		{
			return 1;
		}
		return 0;
	}

	void clear()
	{
		T* tmpArr = new T[this->capacity];
		delete[] arr;

		arr = tmpArr;
		this->size = 0;
	}

	T* begin()
	{
		return this->arr;
	}

	T* end()
	{
		return &(this->arr[this->size - 1]);
	}

	T& operator[](size_t index) {
		return this->arr[index];
	}

	void insert(size_t index, T item)
	{
		if (this->size == this->capacity)
		{
			this->capacity *= 2;
			T* tmpArr = new T[this->capacity];

			for (size_t i = 0; i < this->size; i++)
			{
				tmpArr[i] = arr[i];
			}

			delete[] this->arr;

			this->arr = tmpArr;

		}
		if (this->size != this->capacity) {
			T* tmpArr = new T[this->capacity];
			for (size_t i = 0, b = 0; i < this->size + 1; i++, b++)
			{
				if (i != index) {
					tmpArr[i] = arr[b];
				}

				else
				{
					tmpArr[i] = item;
					b--;
				}
			}
			delete[] arr;
			arr = tmpArr;
			this->size++;
		}
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
	MyVector<int> n1{ 5,2,3,4 };

	cout << "Start array : \n";
	cout << n1;

	cout << "\nPush_Back : \n";
	n1.push_back(7);
	cout << n1;

	n1.pop_back();
	cout << "\nPop_Back : \n";
	cout << n1;


	cout << "\nSize of array : " << n1.Size();

	cout << "\nCheck array status : " << n1.empty();


	cout << "\nBegin adress : " << n1.begin();

	cout << "\nEnd adress : " << n1.end();

	cout << "\nOperator[] : " << n1[0];

	cout << "\nInsert : \n";
	n1.insert(0, 1);
	cout << n1;

	cout << "\nClear :";
	n1.clear();
	cout << n1;
	return 0;
}
