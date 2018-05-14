#pragma once
#include<initializer_list>
#include<iostream>
#include <ostream>
#include <istream>

class String
{
public:
	char * symbols;
	String();
	String(const char*);
	size_t size;
	void operator +=(const char);
	void operator +=(const String);
	friend std::ostream & operator <<(String &, std::ostream &);
	size_t length() const;
	char * operator [](const int & pos);
	~String();
};

