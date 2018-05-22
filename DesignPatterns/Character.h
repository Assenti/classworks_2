#pragma once
class Character
{
public:
	int hp, mp;
	virtual void message() = 0;
	Character();
	virtual ~Character();
};

