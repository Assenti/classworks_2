#include "Human.h"



Human::Human(std::string _name)
{
	name = _name;
}

void Human::breathe()
{
	std::cout << "I'm breathing" << std::endl;
}

void Human::talk()
{
	std::cout << "My name is " << name << std::endl;
}


Human::~Human()
{
}
