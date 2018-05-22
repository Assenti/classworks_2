#pragma once
#include "Character.h"
#include <iostream>

class Healer : public Character
{
public:
	void message();
	Healer();
	~Healer();
};

