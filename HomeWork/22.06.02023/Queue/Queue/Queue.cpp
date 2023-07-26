#include <iostream>
using namespace std;

template<typename T>
class MyQueue {
private:
	T* array{};
	size_t size{};
	size_t capacity{};
public:
	MyQueue() = default;

	MyQueue(size_t size)
	{
		this->size = size;
		this->capacity = capacity * 2;
	}

	MyQueue(initializer_list<T> list)
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

	friend ostream& operator <<(ostream& os, const MyQueue other)
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

	T peek()
	{
		if (size == 0)
		{
			cout << "Array is empty!";
			return;
		}

		static int index = 0;

		T value = this->array[index];
		index--;
		return value;
	}
};

int main()
{
	MyQueue<int> n1{ 5 };
	cout << "Before Push : " << n1;
	n1.push(4);
	n1.push(3);
	cout << "\nAfter Push : " << n1;
	n1.pop();
	cout << "\nAfter pop : " << n1;
	cout << "\nPeek :" << n1.peek();
	
	return 0;
}
