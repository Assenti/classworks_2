#include "Ground.h"

vector<Pixel> Ground::getBody()
{
	return body;
}

Ground::Ground()
{
	sign = '=';
	for (int i = 0; i < 50; i++)
	{
		body.push_back(Pixel(i, 15));
	}
}

Ground::~Ground()
{
}

void Ground::draw()
{
	for (Pixel & pixel : body)
	{
		pixel.draw(sign);
	}
}
