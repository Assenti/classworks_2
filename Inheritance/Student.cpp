#include "Student.h"



std::string Student::getGrade()
{
	return grade;
}

std::string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

Student::Student(std::string name) : Human(name)
{
}


Student::~Student()
{
}
