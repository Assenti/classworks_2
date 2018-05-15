#pragma once
#include <iostream>

template<class T>
class LinkedList
{
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
	}
	void addToTail(const T & value)
	{
		if (head == nullptr)
		{
			head = new Element<T>(value);
		}
		else
		{
			Element<T> * temp = head->next;
			while (temp != nullptr)
			{
				temp = temp->next;
			}
		}
	}
	void deleteByValue(const T & value)
	{
		if (head != nullptr)
		{
			ElementOfLinkedList<T> * temp = head;
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

