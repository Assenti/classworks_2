#pragma once
#include <string>
#include <iostream>

class Passport 
{
protected:
	int Docid;
	signed int timestamp;
public:
	virtual void info() = 0;
	Passport();
	virtual ~Passport();
};

