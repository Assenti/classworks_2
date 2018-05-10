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
	T * begin()
	{
		return data[0];
	}
	T * end()
	{
		return data[size - 1];
	}
	size_t count() const
	{
		return size;
	}
	void erase(const T & _element)
	{
		for (auto & element : data)
		{
			if (element == _element)
			{
				
				data = (T*)realloc(data, --size * sizeof(T));
			}
		}
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

