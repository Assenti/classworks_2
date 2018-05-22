#pragma once
#include <iostream>
#include <string>
class Client
{
public:
	enum State { Anonymus, Authenticated };
	State state;
	Client();
	~Client();
};

