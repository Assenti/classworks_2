#include <iostream>
#include "Policeman.h"
#include "Student.h"

int main()
{
	Policeman a("Harry");
	a.breathe();
	a.talk();


	Student b("Peter");
	b.talk();
	


	system("pause");
	return 0;
}