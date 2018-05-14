#pragma once
#include <initializer_list>

template<class T>
class Queue
{
private:
	T * data;
public:
	size_t size;
	T & getData()
	{
		return &data;
	}
	Queue(std::initializer_list<T> elems)
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

	void enQueue(const T & elem)
	{
		push_back(elem);
	}

	void deQueue(const T & elem)
	{
		T * data_temple = new T[size - 1];
		for (int i = 1, j = 0; i < size; i++)
		{
			data_temple[j] = data[i];
			j++;
		}
		size--;
		data = data_temple;
	}

	~Queue()
	{
		delete[] data;
	}
};

