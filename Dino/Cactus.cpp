#include "Cactus.h"

vector<Pixel> Cactus::getBody()
{
	return body;
}

Cactus::Cactus()
{
	sign = 'F';
	body.push_back(Pixel(48, 14));
	body.push_back(Pixel(48, 14));
}

Cactus::~Cactus()
{
}

void Cactus::move()
{
	for (Pixel & pixel : body)
	{
		pixel.x--;
	}
	if (body[0].x < 1)
	{
		int size = rand() % 2;
		body.clear();
		if (size == 1)
		{
			body.push_back(Pixel(48, 14));
		}
		else
		{
			body.push_back(Pixel(48, 14));
			body.push_back(Pixel(48, 14));
		}
		for (Pixel & pixel : body)
		{
			pixel.x = 20;
		}
	}
}

void Cactus::draw()
{
	for (Pixel pixel : body)
	{
		pixel.draw(sign);
	}
}
