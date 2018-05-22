#pragma once
#include "Passport.h"
#include <iostream>
class ForeignPassport : public Passport
{
public:
	void info();
	ForeignPassport();
	~ForeignPassport();
};

