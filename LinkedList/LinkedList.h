#pragma once
#include <iostream>

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

	void swap(int first, int second)
	{
		Element<T> * temp = head;
		Element<T> * helper = temp[first];
		temp[first]->value = temp[second];
		temp[second] = helper;
	}

	T * result(const int wanted_value) const
	{
		T * out = new T[counter];
		int i = 0;
		Element<T> * temp = head;
		while (temp != nullptr)
		{
			if (wanted_value == temp->next->value)
			{
				out[i] = temp->value;
			}
			temp = temp->next;
			i++;
		}
		return out;
	}

	friend std::ostream & operator << (std::ostream & stream, LinkedList<T> & list)
	{
		if (list.head != nullptr)
		{
			ElementOfLinkedList<type> * temp = list.head;
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

