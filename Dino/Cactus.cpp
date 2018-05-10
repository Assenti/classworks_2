#include "Cactus.h"

vector<Pixels> Cactus::getBody()
{
	return body;
}

Cactus::Cactus()
{
	sign = 'F';
	body.push_back(Pixels(48, 13));
	body.push_back(Pixels(48, 14));
}

Cactus::~Cactus()
{
}

void Cactus::move()
{
	for (Pixels & pixel : body)
	{
		pixel.x--;
	}
	if (body[0].x < 1)
	{
		int size = rand() % 2;
		body.clear();
		if (size == 1)
		{
			body.push_back(Pixels(48, 14));
		}
		else
		{
			body.push_back(Pixels(48, 13));
			body.push_back(Pixels(48, 14));
		}
		for (Pixels & pixel : body)
		{
			pixel.x = 20;
		}
	}
}

void Cactus::draw()
{
	for (Pixels pixel : body)
	{
		pixel.draw(sign);
	}
}
