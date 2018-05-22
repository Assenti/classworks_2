#pragma once
#include "Client.h"
class AuthManager
{
private:
	AuthManager();
public:
	static AuthManager & getInstance();
	void sign_up(const Client &);
	void sign_in(Client &) const;
	void sign_out(Client &) const;
	
	~AuthManager();
};

