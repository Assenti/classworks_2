#pragma once
#include <vector>
#include "Pixel.h"
using namespace std;

class Dino
{
private:
	char sign;
	vector<Pixel> body;
public:
	bool isJumping;
	Dino();
	~Dino();
	void draw();
	void jump();
	void settle();
};

