#pragma once
#include <iostream>
#include <string>
#include <ostream>
#include <istream>
using namespace std;

enum Capacity
{
	Big = 200, Middle = 100, Small = 20
};

class Airplane
{
private:
	string type;
	int passengers;
public:
	Capacity capacity;
	string getType();
	void setType(string type);
	int getPassengers();
	void setPassengers(int);
	Airplane(string, int, Capacity);
	~Airplane();
	bool operator ==(Airplane &);
	Airplane operator ++();
	Airplane operator --();
	bool operator <(Airplane &);
	bool operator >(Airplane &);
	friend ostream & operator <<(const Airplane & a, ostream & os);
	friend istream & operator >>(Airplane & a, istream & is);
};


