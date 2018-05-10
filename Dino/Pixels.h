#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
class Pixels
{
private:
	
public:
	short x, y;
	short getX();
	void setX(short);
	short getY();
	void setY(short);
	Pixels(short, short);
	void draw(const char & sign);
	Pixels();
	~Pixels();
	bool operator ==(const Pixels &) const;
	static void gotoXY(short x, short y);
};

