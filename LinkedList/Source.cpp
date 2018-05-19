#include "LinkedList.h"
#include <iostream>

int main()
{
	LinkedList<int> list;
	list.addToTail(1);
	list.addToTail(2);
	list.addToTail(3);
	list.addToTail(1);

	list.replace(1, 5);
	list.show();
	


	system("pause");
	return 0;
}