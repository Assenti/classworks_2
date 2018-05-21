#pragma once
#include<string>
#include<iostream>

class Human
{
protected:
	std::string name;
	int age;
public:
	Human(std::string);
	void breathe();
	void talk();
	~Human();
};

