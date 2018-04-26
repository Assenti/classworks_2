#pragma once
#include "Pixel.h"
#include <vector>


class Cactus
{
	vector<Pixel> cactus;
public:
	char sign;
	Cactus();
	~Cactus();
	void move();
	void draw();
};

