#pragma once
#include <iostream>
#include <string>
using namespace std;

class Airplane
{
	enum Capacity
	{
		Big = 200, Middle = 100, Small = 20
	};
private:
	string type;
	int passengers;
	Capacity capacity;
public:
	string getType();
	void setType(string type);
	Airplane(string, int, Capacity);
	~Airplane();
	bool operator ==(Airplane &);
	Airplane operator ++();
	Airplane operator --();
	bool operator <(Airplane &);
	bool operator >(Airplane &);
};

