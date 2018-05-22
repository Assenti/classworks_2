#pragma once
#include "AuthManager.h"
class RealFactory
{
public:
	RealFactory();
	~RealFactory();
	static Client * client();
	static Client * client_signed_in();
	static Client * client_signed_out();
};

