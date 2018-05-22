#include "Passport.h"

void Passport::info()
{
	Docid = rand() % 1000000;
	timestamp = 123456;
}

Passport::Passport()
{
}


Passport::~Passport()
{
}
