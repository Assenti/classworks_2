#include "Ground.h"

vector<Pixels> Ground::getBody()
{
	return body;
}

Ground::Ground()
{
	sign = '=';
	for (int i = 0; i < 50; i++)
	{
		body.push_back(Pixels(i, 15));
	}
}

Ground::~Ground()
{
}

void Ground::draw()
{
	for (Pixels & pixel : body)
	{
		pixel.draw(sign);
	}
}
