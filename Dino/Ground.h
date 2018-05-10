#pragma once
#include "Pixels.h"
#include <vector>
using namespace std;

class Ground
{
	char sign;
	vector <Pixels> body;
public:
	vector <Pixels> getBody();
	Ground();
	~Ground();
	void draw();
};

