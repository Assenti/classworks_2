#include "Progression.h"


void Progression::setA1(int a1)
{
	this->a1 = a1;
}

int Progression::getA1()
{
	return a1;
}

void Progression::setD(int d)
{
	this->d = d;
}

int Progression::getD()
{
	return d;
}

int Progression::operator()(int n)
{
	return (((a1 + (a1 + (n-1) * d))) * n) / 2;
}

int Progression::operator[](int n)
{
	return (a1 + (n-1) * d);
}

Progression::Progression()
{
}

Progression::~Progression()
{
}
