#pragma once
#include <string>
class Account
{
private:
	int id;
	std::string username, password;
public:
	std::string getUsername();
	int getId();
	void setPassword();
	Account();
	~Account();
};

