#include <iostream>
using namespace std;

template<typename T>
class MyDeQueue {
private:
	T* array{};
	size_t size{};
	size_t capacity{};
public:
	MyDeQueue() = default;

	MyDeQueue(size_t size)
	{
		this->size = size;
		this->capacity = capacity * 2;
	}

	MyDeQueue(initializer_list<T> list)
	{
		this->size = list.size();
		this->capacity = list.size() * 2;
		this->array = new T[capacity];
		int j = 0;
		for (auto i : list) {
			this->array[j] = i;
			j++;
		}
	}

	friend ostream& operator <<(ostream& os, const MyDeQueue other)
	{
		for (size_t i = 0; i < other.size; i++)
		{
			os << other.array[i] << ' ';
		}
		return os;
	}

	void push(T a)
	{
		if (this->size >= this->capacity)
		{
			this->capacity = capacity * 2;
			T* tmpArr = new T[capacity]{};
			tmpArr[0] = a;
			for (size_t i = 0; i < size; i++)
			{
				tmpArr[i + 1] = this->array[i];
			}
			delete[] this->array;
			this->array = tmpArr;
			this->size++;
		}
		else
		{
			T* tmpArr = new T[capacity]{};
			tmpArr[0] = a;
			for (size_t i = 0; i < size; i++)
			{
				tmpArr[i + 1] = this->array[i];
			}
			delete[] this->array;
			this->array = tmpArr;
			this->size++;
		}
	}

	void push_back(T a)
	{
		if (this->size >= this->capacity)
		{
			this->capacity = capacity * 2;
		}

		T* tmpArr = new T[capacity]{};
		for (size_t i = 0; i < size; i++)
		{
			tmpArr[i] = this->array[i];
		}
		tmpArr[this->size] = a;
		delete[] this->array;
		this->array = tmpArr;
		this->size++;
	}

	void pop()
	{
		if (size == 0)
		{
			cout << "Array is empty!";
			return;
		}

		T* tmpArr = new T[this->capacity]{};
		for (size_t i = 0; i < this->size - 1; i++)
		{
			tmpArr[i] = this->array[i + 1];
		}
		delete[] this->array;
		this->array = tmpArr;
		this->size--;
	}

	void pop_back()
	{
		if (size == 0)
		{
			cout << "Array is empty!";
			return;
		}

		T* tmpArr = new T[this->capacity]{};
		for (size_t i = 0; i < this->size - 1; i++)
		{
			tmpArr[i] = this->array[i];
		}
		delete[] this->array;
		this->array = tmpArr;
		this->size--;
	}

	T peek()
	{
		if (size == 0)
		{
			cout << "Array is empty!";
			return 0;
		}

		static int index = 0;

		T value = this->array[index];
		index--;
		return value;
	}

	T peek_back()
	{
		if (size == 0)
		{
			cout << "Array is empty!";
			return 0;
		}

		static size_t index = this->size - 1;

		T value = this->array[index];
		index--;
		return value;
	}
};

int main()
{
	MyDeQueue<int> n1{ 5 };
	cout << "Before Push : " << n1;
	n1.push(4);
	n1.push(3);
	cout << "\nAfter Push : " << n1;
	n1.pop();
	cout << "\nAfter pop : " << n1;
	cout << "\nAfter peek :" << n1.peek();
	n1.push_back(6);
	cout << "\n\niAfter push_back : " << n1;
	n1.pop_back();
	cout << "\nAfter pop_back : " << n1;
	cout << "\nAfter peek_back : " << n1.peek_back();
	return 0;
}
