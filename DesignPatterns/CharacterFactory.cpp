#include "CharacterFactory.h"



CharacterFactory::CharacterFactory()
{
}


CharacterFactory::~CharacterFactory()
{
}

Character * CharacterFactory::createCharacter(Choice choice)
{
	Character * character = nullptr;
	switch (choice)
	{
	case warrior:
		character = new Warrior();
		break;
	case healer:
		character = new Healer();
		break;
	case wizard:
		character = new Wizard();
		break;
	default:
		assert(false);
	}
	return character;
}
