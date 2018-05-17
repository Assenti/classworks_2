#pragma once
#include <ostream>
#include <vector>

template<class T>
class LinkedList
{
private:
	int counter = 0;
public:
	template<class T>
	class Element
	{
	public:
		T value;
		Element * next;
		Element(const T & value)
		{
			this->value = value;
			next = nullptr;
		}
		~Element()
		{
			if (next != nullptr)
			{
				delete next;
			}
		}
	};
	Element<T> * head;
	LinkedList()
	{
		head = nullptr;
		++counter;
	}
	void addToTail(const T & value)
	{
		if (head == nullptr)
		{
			head = new Element<T>(value);
		}
		else
		{
			Element<T> * temp = head;
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = new Element<T>(value);
		}
	}
	void addToHead(const T & value)
	{
		if (head == nullptr)
		{
			head = new Element<T>(value);
		}
		else
		{
			Element<T> * temp = head;
			Element<T> * futureHead = new Element<T>(value);
			head = futureHead;
			head->next = temp;
		}
	}
	void swap(size_t & first, size_t & second)
	{
		Element<T> * first_temp = head, *second_temp = head;
		while (first > 0)
		{
			first_temp = first_temp->next;
			first--;
		}
		while (second > 0)
		{
			second_temp = second_temp->next;
			second--;
		}
		T temp = first_temp->value;
		first_temp->value = second_temp->value;
		second_temp->value = temp;
	}
	void deleteByValue(const T & value)
	{
		if (head != nullptr)
		{
			Element<T> * temp = head;
			if (head->value == value)
			{
				head = head->next;
			}
			else
			{
				while (temp->next != nullptr)
				{
					if (temp->next->value == value)
					{
						temp->next = temp->next->next;
					}
					temp = temp->next;
				}
			}
		}
	}
	std::vector<size_t> searchByValue(const T & value) const
	{
		std::vector<size_t> result;
		size_t i = 0;
		for (
			Element<T> * temp = head;
			temp != nullptr;
			temp = temp->next)
		{
			if (temp->value == value)
			{
				result.push_back(i);
			}
			++i;
		}
		return result;
	}
	T & operator[](const int index) const
	{
		int i = 0;
		Element<T> * temp = head;
		while (temp != nullptr)
		{
			if (index == i)
			{
				return temp->value;
			}
			temp = temp->next;
			i++;
		}
	}

	friend std::ostream & operator << (std::ostream & stream, LinkedList<T> & list)
	{
		if (list.head != nullptr)
		{
			Element<T> * temp = list.head;
			while (temp != nullptr)
			{
				stream << temp->value << std::endl;
				temp = temp->next;
			}
		}
		return stream;
	}

	~LinkedList()
	{
		delete head;
	}
	
};

