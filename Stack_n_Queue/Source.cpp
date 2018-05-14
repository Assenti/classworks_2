#include<iostream>
#include "Stack.h"
#include "Queue.h"


int main()
{
	Stack<int> one(std::initializer_list<int>{1,2,3});
	Queue<int> other(std::initializer_list<int>{5, 6, 7});

	one += 6;
	std::cout << one.pop_back() << std::endl;
	std::cout << one.peek() << std::endl;
	one--;

	std::cout << "===================" << std::endl;

	other.enQueue(8);
	other += 9;
	other--;
	std::cout << other.deQueue() << std::endl;

	


	system("pause");
	return 0;
}