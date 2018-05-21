#include "Policeman.h"

std::string Policeman::getName()
{
	return name;
}

int Policeman::getAge()
{
	return age;
}

std::string Policeman::getRank()
{
	return rank;
}

Policeman::Policeman(std::string name) : Human(name)
{
	
}


Policeman::~Policeman()
{
}
