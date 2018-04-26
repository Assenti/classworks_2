#include "Pixel.h"

Pixel::Pixel(short x, short y)
{
	this->x = x;
	this->y = y;
}


Pixel::~Pixel()
{
}

void Pixel::draw(const char & sign)
{
	COORD position = { x,y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, position);
	cout << sign;
}
