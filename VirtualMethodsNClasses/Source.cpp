#include <iostream>
#include "Int.h"
#include "PosInt.h"


int main()
{
	PosInt x = new PosInt();
	x.setVAlue(-1);
	std::cout << x.getValue() << std::endl;

	system("pause");
	return 0;
}