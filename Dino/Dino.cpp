#include "Dino.h"

char Dino::getSign()
{
	return sign;
}

vector<Pixels> Dino::getBody()
{
	return body;
}

Dino::Dino()
{
	isJumping = false;
	sign = '#';
	body.push_back(Pixels(10, 13));
	body.push_back(Pixels(10, 14));
	body.push_back(Pixels(11, 13));
	body.push_back(Pixels(11, 14));
}

Dino::~Dino()
{
}

void Dino::draw()
{
	for (Pixels pixel : body)
	{
		pixel.draw(sign);
	}
}

void Dino::jump()
{
	bool gotCeiling = false;
	for (Pixels & pixel : body)
	{
		if (pixel.y < 8)
		{
			gotCeiling = true;
		}
		
	}
	if (!gotCeiling)
	{
		for (Pixels & pixel : body)
		{
			pixel.y--;
		}
	}
}

void Dino::settle()
{
	for (Pixels & pixel : body)
	{
		pixel.y++;
	}
}
