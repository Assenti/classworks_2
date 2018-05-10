#pragma once


template <typename T>
class Array
{
	T * data;
public:

	Array(int size)
	{
		data = new T[size];
	}
	~Array()
	{
		delete[] data;
	}
};

