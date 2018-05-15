#pragma once
#include <initializer_list>

template<class T>
class Queue
{
private:
	T * data;
	size_t size, head, tail;
public:
	Queue()
	{
		size = 1;
		data = new T[size];
	    data[0] = head = tail = 0;
	}

	size_t getSize()
	{
		return size;
	}

	T enQueue(const T & elem)
	{
		if (tail + 1 >= size)
		{
			++size;
			data = new T[size];
		}
		else if (tail + 1 > size)
		{
			size *= 2;
			data = (T*)realloc(data, ++size * sizeof(T));
		}
		data[++tail] = elem;
	}
		
	T deQueue()
	{
		return data[head++];
	}

	void operator += (const T & elem)
	{
		enQueue(elem);
	}

	void operator --(int)
	{
		deQueue();
	}

	~Queue()
	{
		delete[] data;
	}
};

