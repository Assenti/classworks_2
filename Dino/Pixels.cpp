#include "Pixels.h"

short Pixels::getX()
{
	return x;
}

void Pixels::setX(short x)
{
	this->x = x;
}

short Pixels::getY()
{
	return y;
}

void Pixels::setY(short y)
{
	this->y = y;
}

Pixels::Pixels(short x, short y)
{
	this->x = x;
	this->y = y;
}

void Pixels::draw(const char & sign)
{
	gotoXY(x, y);
	std::cout << sign;
}

Pixels::Pixels()
{
}


Pixels::~Pixels()
{
}

bool Pixels::operator==(const Pixels & pixel) const
{
	return x == pixel.x && y == pixel.y;
}

void Pixels::gotoXY(short x, short y)
{
	COORD position = { x, y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, position);
}
