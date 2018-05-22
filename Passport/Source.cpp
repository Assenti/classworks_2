#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
#include <cassert>
#include <vector>
#include "PassportCreator.h"


int main()
{
	std::vector<Passport *> passports;
	passports.push_back(PassportCreator::passportCreator(PassportCreator::Common));
	passports.push_back(PassportCreator::passportCreator(PassportCreator::Foreign));

	for (Passport * passport : passports)
	{
		passport->info();
	}

	system("pause");
	return 0;
}