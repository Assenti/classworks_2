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
	char getSign();
	bool isJumping;
	vector<Pixel> getBody();
	Dino();
	~Dino();
	void draw();
	void jump();
	void settle();
};

