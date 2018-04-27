#include "Dino.h"

Dino::Dino()
{
	isJumping = false;
	sign = '#';
	body.push_back(Pixel(3, 3));
	body.push_back(Pixel(3, 4));
	body.push_back(Pixel(4, 3));
	body.push_back(Pixel(4, 4));
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
	for (Pixel & pixel : body)
	{
		pixel.y--;
	}
}

void Dino::settle()
{
	for (Pixel & pixel : body)
	{
		pixel.y++;
	}
}
