#include "Ground.h"


Ground::Ground()
{
	sign = '=';
	for (int i = 0; i < 20; i++)
	{
		ground.push_back(Pixel(i, 5));
	}
}

Ground::~Ground()
{
}

void Ground::draw()
{
	for (Pixel & pixel : ground)
	{
		pixel.draw(sign);
	}
}
