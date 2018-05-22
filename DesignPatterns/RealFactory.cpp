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
