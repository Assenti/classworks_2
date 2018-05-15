#include<iostream>
#include "Stack.h"
#include "Queue.h"


int main()
{
	Stack<int> one;
	Queue<int> other;
	
	one.push(1);
	one += 2;
	std::cout << one.pop() << std::endl;
	std::cout << one.peek() << std::endl;
	one--;

	other.enQueue(8);
	other += 9;
	other--;
	std::cout << other.deQueue() << std::endl;

	system("pause");
	return 0;
}