#pragma once
#include "Pixels.h"
#include <vector>
using namespace std;

class Cactus
{
	vector<Pixels> body;
public:
	char sign;
	vector<Pixels> getBody();
	Cactus();
	~Cactus();
	void move();
	void draw();
};

