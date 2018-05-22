#include "RealFactory.h"



RealFactory::RealFactory()
{
}


RealFactory::~RealFactory()
{
}

Client * RealFactory::client()
{
	return new Client();
}

Client * RealFactory::client_signed_in()
{
	Client * c = client();
	AuthManager::getInstance().sign_in(*c);
	return c;
}

Client * RealFactory::client_signed_out()
{
	Client * c = client_signed_in();
	AuthManager::getInstance().sign_out(*c);
	return c;
}
