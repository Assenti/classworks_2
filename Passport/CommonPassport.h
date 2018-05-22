#pragma once
#include "Passport.h"
#include <iostream>
#include <string>

class CommonPassport : public Passport
{
public:
	void info();
	CommonPassport();
	~CommonPassport();
};

