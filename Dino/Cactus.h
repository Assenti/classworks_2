#pragma once
#include "Pixel.h"
#include <vector>


class Cactus
{
	vector<Pixel> body;
public:
	char sign;
	vector<Pixel> getBody();
	Cactus();
	~Cactus();
	void move();
	void draw();
};

