#pragma once
#include "Pixel.h"
#include <vector>
using namespace std;

class Ground
{
	char sign;
	vector <Pixel> body;
public:
	vector <Pixel> getBody();
	Ground();
	~Ground();
	void draw();
};

