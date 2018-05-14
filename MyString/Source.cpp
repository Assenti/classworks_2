#include "String.h"


int main()
{
	String str("first");
	String str2("second");

	str += str2;
	std::cout << str << std::endl;


	system("pause");
	return 0;
}