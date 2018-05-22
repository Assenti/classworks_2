#pragma once
#include <cassert>
#include "Healer.h"
#include "Warrior.h"
#include "Wizard.h"
class CharacterFactory
{
public:
	enum Choice
	{
		warrior=0, healer=1, wizard=2
	};
	CharacterFactory();
	~CharacterFactory();
	static Character * createCharacter(Choice);
};

