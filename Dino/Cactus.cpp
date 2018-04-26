#include "Cactus.h"

Cactus::Cactus()
{
	sign = 'F';
	cactus.push_back(Pixel(20, 3));
	cactus.push_back(Pixel(20, 4));
}

Cactus::~Cactus()
{
}

void Cactus::move()
{
	for (Pixel pixel : cactus)
	{
		pixel.x--;
	}
	if (cactus[0].x < 1)
	{
		for (Pixel pixel : cactus)
		{
			pixel.x = 20;
		}
	}
}

void Cactus::draw()
{
	for (Pixel pixel : cactus)
	{
		pixel.draw(sign);
	}
}
