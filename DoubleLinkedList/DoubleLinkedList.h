#pragma once

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
			if (next != nullptr)
			{
				delete next;
			}
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
			head = new Element<T>(value);
			tail = head->next;
		}
		else
		{
			Element<T> * temp = head;
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = new Element<T>(value);
			tail = head->next;
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
	void deleteFromHead()
	{
		head = head->next;
	}
	void deleteFromTail()
	{
		Element<T> * temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = nullptr;
	}
	~DoubleLinkedList()
	{
	}
};

