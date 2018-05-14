#pragma once
#include <initializer_list>

template<class T>
class Stack
{
private:
	T * data;
	size_t size;
public:
	size_t getSize()
	{
		return size;
	}
	T & getData()
	{
		return &data;
	}

	Stack(std::initializer_list<T> elems) 
	{
		for (T elem : elems)
		{
			push_back(elem);
		}
	}

	void push_back(const T & elem)
	{
		if (nullptr == data)
		{
			data = new T[++size];
			data[0] = elem;
		}
		else
		{
			data = (T*)realloc(data, ++size * sizeof(T));
			data[size - 1] = elem;
		}
	}

	T pop_back()
	{
		auto temple = data[size - 1];
		if (nullptr != data)
		{
			data = (T*)realloc(data, --size * sizeof(T));
		}
		return temple;
	}

	T peek()
	{
		return data[size - 1];
	}

	void operator += (const T & elem)
	{
		push_back(elem);
	}

	void operator -- (int)
	{
		pop_back();
	}

	T operator [](int index)
	{
		peek();
	}

	~Stack()
	{
		delete[] data;
	}
};

