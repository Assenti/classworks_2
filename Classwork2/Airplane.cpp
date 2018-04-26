#include "Airplane.h"

string Airplane::getType()
{
	return type;
}

void Airplane::setType(string type)
{
	this->type = type;
}

int Airplane::getPassengers()
{
	return passengers;
}

void Airplane::setPassengers(int passengers)
{
	this->passengers = passengers;
}

Airplane::Airplane(string type, int passengers, Capacity capacity)
{
	this->type = type;
	this->passengers = passengers;
	this->capacity = capacity;
}

Airplane::~Airplane()
{
}

bool Airplane::operator==(Airplane & other)
{
	return this->type == other.type;
}

Airplane Airplane::operator++()
{
	++this->passengers;
	return *(this);
}

Airplane Airplane::operator--()
{
	--this->passengers;
	return *(this);
}

bool Airplane::operator<(Airplane & other)
{
	return this->capacity < other.capacity;
}

bool Airplane::operator>(Airplane & other)
{
	return this->capacity > other.capacity;
}

ostream & operator <<(const Airplane & a, ostream & os)
{
	os << a.type << " " << a.passengers << " " << a.capacity;
	return os;
}

istream & operator >>(Airplane & a, istream & is)
{
	is >> a.type >> a.passengers;
	return is;
}
