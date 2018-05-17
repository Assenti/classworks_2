#include "LinkedList.h"
#include <iostream>

int main()
{
	LinkedList<int> l;
	l.addToTail(5);
	l.addToTail(6);
	l.addToTail(7);
	l.addToHead(4); 
	l.addToHead(3);
	l.addToTail(5);

	l.deleteByIndex(2);
	std::cout << l << std::endl;
	/*std::cout << l[0] << std::endl;
	auto result = l.searchByValue(5);
	for (auto i : result)
		std::cout << i << ' ';
	std::cout << std::endl;*/

	system("pause");
	return 0;
}