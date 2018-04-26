#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;

class Pixel
{

public:
	short x, y;
	Pixel(short, short);
	~Pixel();
	void draw(const char &);
};

