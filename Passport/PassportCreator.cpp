#include "PassportCreator.h"


PassportCreator::PassportCreator()
{
}

PassportCreator::~PassportCreator()
{
}

Passport * PassportCreator::passportCreator(PassportType type)
{
	Passport * passport = nullptr;
	switch (type)
	{
	case Common:
		passport = new CommonPassport();
		break;
	case Foreign:
		passport = new ForeignPassport();
		break;
	default:
		assert(false);
	}
	return passport;
}
