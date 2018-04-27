#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <ostream>
#include <istream>
using namespace std;

class Pixel
{
public:
	short x, y;
	Pixel(short, short);
	~Pixel();
	void draw(const char &);
	bool operator ==(const Pixel &) const;
	static void gotoXY(short, short);
};

