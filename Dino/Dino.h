#pragma once
#include <vector>
#include "Pixels.h"
using namespace std;

class Dino
{
private:
	char sign;
	vector<Pixels> body;
public:
	char getSign();
	bool isJumping;
	vector<Pixels> getBody();
	Dino();
	~Dino();
	void draw();
	void jump();
	void settle();
};

