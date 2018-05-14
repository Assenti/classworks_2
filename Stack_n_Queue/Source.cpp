#include<iostream>
#include "Stack.h"
#include "Queue.h"


int main()
{
	Stack<int> one(std::initializer_list<int>{1,2,3});
	Queue<int> other(std::initializer_list<int>{5, 6, 7});

	int var = one.pop_back();
	std::cout << var << std::endl;
	for (int i = 0; i < one.getSize(); i++)
	{
		std::cout << one[i] << std::endl;
	}

	std::cout << one.peek() << std::endl;

	std::cout << "===================" << std::endl;

	other.enQueue(8);
	std::cout << other.deQueue() << std::endl;

	for (int i = 0; i < other.getSize(); i++)
	{
		std::cout << other[i] << std::endl;
	}
	


	system("pause");
	return 0;
}