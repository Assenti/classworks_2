#include "String.h"

String::String()
{
}

String::String(const char * symbols)
{
	std::initializer_list<char>(symbols);
}

void String::operator+=(const char ch)
{
	size++;
	symbols[size] = ch;
}

void String::operator+=(const String other)
{
	int work_size = size + other.length();
	size += other.length();
	for (int i = size, j = 0; i < work_size; i++)
	{
		symbols[i] = other[j];
		j++;
	}
}


size_t String::length() const
{
	return size;
}

char * String::operator[](const int & pos)
{
	return & symbols[pos];
}

String::~String()
{
	delete[] symbols;
}

std::ostream & operator<<(String & s, std::ostream & os)
{
	for (int i = 0; i < s.length(); i++)
	{
		os << s[i];
	}
}
