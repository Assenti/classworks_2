#pragma once
#include <initializer_list>
#include <cstdlib>

template <class T>
class Vector
{
public:
	T * data;
	size_t size;
	Vector()
	{
		data = nullptr;
		size = 0;
	}
	Vector(std::initializer_list<T> & elements)
	{
		for (auto & element : elements) {
			this->push_back(element);
		}
	}
	void push_back(const T & element)
	{
		if (nullptr == data)
		{
			data = new T[++size];
			data[0] = element;
		}
		else
		{
			data = (T*)realloc(data, ++size * sizeof(T));
			data[size - 1] = element;
		}
	}
	void pop_back()
	{
		if (nullptr != data)
		{
			data = (T*)realloc(data, --size * sizeof(T));
		}
	}

	size_t count() const
	{
		return size;
	}

	void erase(const int index)
	{
		T * data_temple = new T[size - 1];
		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index)
			{
				data_temple[j] = data[i];
				j++;
			}
		}
		size--;
		data = data_temple;
	}

	T & operator [](const int & pos)
	{
		return data[pos];
	}
	void clear()
	{
		delete[] data;
	}
	~Vector()
	{
		clear();
	}
};

