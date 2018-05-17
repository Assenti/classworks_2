#pragma once
#include <ostream>


template<class T>
class DoubleLinkedList
{
public:
	template<class T>
	class Element
	{
	public:
		T value;
		Element * next, *prev;
		Element(const T & value)
		{
			this->value = value;
			next = prev = nullptr;
		}
		~Element()
		{
		}
	};
	Element<T> * head, * tail;
	DoubleLinkedList()
	{
		head = tail = nullptr;
	}

	
	void addToTail(const T & value)
	{
		if (head == nullptr)
		{
			head = tail = new Element<T>(value);
		}
		else
		{
			Element<T> * temp = tail;
			tail->next = new Element<T>(value);
			tail = tail->next;
			tail->prev = temp;
		}
	}
	void addToHead(const T & value)
	{
		if (head == nullptr)
		{
			head = tail = new Element<T>(value);
		}
		else
		{
			Element<T> * temp = head;
			head->prev = new Element<T>(value);
			head = head->prev;
			head->next = temp;
		}
	}
	void deleteFromHead()
	{
		head = head->next;
		delete head->prev;
		head->prev = nullptr;
	}
	void deleteFromTail()
	{
		tail = tail->prev;
		delete head->next;
		tail->next = nullptr;
	}
	void show()
	{
		if (head != nullptr)
		{
			Element<T> * temp = head;
			while (temp != nullptr)
			{
				std::cout << temp->value << std::endl;
				temp = temp->next;
			}
		}
	}
	friend std::ostream & operator << (std::ostream & stream, DoubleLinkedList<T> & list)
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
	~DoubleLinkedList()
	{
		delete head, tail;
	}
};

