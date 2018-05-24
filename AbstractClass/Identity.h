#pragma once
//Interface
class Identity
{
public:
	virtual void sign_in() = 0;
	virtual void sign_up() = 0;
	virtual void sign_out() = 0;
	Identity();
	virtual ~Identity();
};

