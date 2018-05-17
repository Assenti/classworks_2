#include <iostream>
#include "DoubleLinkedList.h"


int main()
{
	DoubleLinkedList<int> list;
	
	list.addToTail(1);
	list.addToTail(2);
	list.addToTail(3);
	list.addToHead(0);

	list.deleteFromHead();
	list.deleteFromTail();
	list.show();
	


	system("pause");
	return 0;
}