#include "App.h"



void App::auth(Identity & auth)
{
	auth.sign_up();
	auth.sign_in();
	auth.sign_out();
}

App::App()
{
}


App::~App()
{
}
