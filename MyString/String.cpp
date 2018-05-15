#include "String.h"

String::String()
{
}

String::String(const char * _symbols)
{
	size = strlen(_symbols);
	symbols = new char[size];

	for (int i = 0; i < strlen(_symbols); i++)
	{
		symbols[i] = _symbols[i];
	}

}

void String::operator+=(const char ch)
{
	size++;
	symbols[size-1] = ch;
}

void String::operator+(const String other)
{
	int start = size;
	int end = size + other.length();
	size += other.length();
	for (int i = start, j = 0; i < end; i++)
	{
		symbols[i] = other.symbols[j];
		j++;
	}
}

size_t String::length() const
{
	return size;
}

char String::operator[](int pos)
{
	return symbols[pos];
}

String::~String()
{
}

std::ostream & operator<<(std::ostream & os, String & s)
{
	for (int i = 0; i < s.size; i++)
	{
		os << s.symbols[i];
	}
	return os;
}

std::istream & operator >> (String & s, std::istream & is)
{
	is >> s.symbols;
	return is;
}
