#pragma once
#include "Human.h"

class Policeman : public Human
{
private:
	std::string rank;
public:
	std::string getName();
	int getAge();
	std::string getRank();
	Policeman(std::string);
	~Policeman();
};

