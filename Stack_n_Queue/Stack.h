#pragma once
#include <initializer_list>

template<class T>
class Stack
{
private:
	T * data;
public:
	size_t size;
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

	T & pop_back()
	{
		if (nullptr != data)
		{
			data = (T*)realloc(data, --size * sizeof(T));
		}
		return & data[size - 1];
	}

	T & peek()
	{
		return &data[size - 1];
	}


	~Stack()
	{
		delete[] data;
	}
};

