#include "Dino.h"

char Dino::getSign()
{
	return sign;
}

vector<Pixel> Dino::getBody()
{
	return body;
}

Dino::Dino()
{
	isJumping = false;
	sign = '#';
	body.push_back(Pixel(10, 13));
	body.push_back(Pixel(10, 14));
	body.push_back(Pixel(11, 13));
	body.push_back(Pixel(11, 14));
}

Dino::~Dino()
{
}

void Dino::draw()
{
	for (Pixel pixel : body)
	{
		pixel.draw(sign);
	}
}

void Dino::jump()
{
	bool gotCeiling = false;
	for (Pixel & pixel : body)
	{
		if (pixel.y < 8)
		{
			gotCeiling = true;
		}
		
	}
	if (!gotCeiling)
	{
		for (Pixel & pixel : body)
		{
			pixel.y--;
		}
	}
}

void Dino::settle()
{
	for (Pixel & pixel : body)
	{
		pixel.y++;
	}
}
