#include "LinkedList.h"
#include <iostream>

int main()
{
	LinkedList<int> l;
	l.addToTail(5);
	l.addToTail(6);
	l.addToTail(7);
	std::cout << l[2] << std::endl;
	l.swap(0, 2);
	std::cout << l[2] << std::endl;
	
	std::cout << l.result(5) << std::endl;
	

	system("pause");
	return 0;
}