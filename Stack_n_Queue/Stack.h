#pragma once
#include <initializer_list>

template<class T>
class Stack
{
private:
	T * data;
	size_t size, top;
public:
	Stack()
	{
		size = 1, top = 0;
		data = new T[size];
		data[0] = 0;
	}

	size_t getSize()
	{
		return size;
	}

	size_t getTop()
	{
		return top;
	}

	void push(const T & elem)
	{
		if (top + 1 >= size)
		{
			size *= 2;
			data = (T*)realloc(data, ++size * sizeof(T));
			
		}
		data[++top] = elem;
	}

	T pop()
	{
		return data[top--];
	}

	T peek()
	{
		return data[top];
	}

	void operator += (const T & elem)
	{
		push(elem);
	}

	void operator -- (int)
	{
		pop();
	}

	T operator [](int index) const
	{
		return data[index];
	}

	~Stack()
	{
		delete[] data;
	}
};

