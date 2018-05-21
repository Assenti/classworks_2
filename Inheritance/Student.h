#pragma once
#include "Human.h"

class Student : public Human
{
private:
	std::string grade;
public:
	std::string getGrade();
	std::string getName();
	int getAge();
	Student(std::string);
	~Student();
};

