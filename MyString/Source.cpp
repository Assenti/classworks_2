#include "String.h"
#include <iostream>

int main()
{
	String str("first");
	String str2("second");
	//std::cout << str.size << std::endl;
	std::cout << str << std::endl;
	std::cout << str2 << std::endl;

	str += 'L';
	str + str2;

	std::cout << str << std::endl;


	system("pause");
	return 0;
}