#pragma once
#include <string>
#include <iostream>
#include "CommonPassport.h"
class Passport 
{
protected:
	int Docid;
	long long int Date;
public:
	virtual void info() = 0;
	Passport();
	virtual ~Passport();
};

