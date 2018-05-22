#pragma once
#include "Passport.h"
#include "CommonPassport.h"
#include "ForeignPassport.h"
#include <cassert>

class PassportCreator
{
public:
	enum PassportType { Common, Foreign };
	PassportType type;
	PassportCreator();
	~PassportCreator();
	static Passport * passportCreator(PassportType);
};

