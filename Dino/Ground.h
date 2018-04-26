#pragma once
#include "Pixel.h"
#include <vector>
using namespace std;

class Ground
{
	char sign;
	vector <Pixel> ground;
public:
	Ground();
	~Ground();
	void draw();
};

