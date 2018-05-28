#pragma once
#include "Identity.h"
#include <iostream>
class Authentication : public Identity
{
public:
	void sign_in() override;
	void sign_up() override;
	void sign_out() override;
	Authentication();
	~Authentication();
};

