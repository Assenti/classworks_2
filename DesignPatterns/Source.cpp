#include <iostream>
#include <vector>
#include "CharacterFactory.h"

int main()
{
	std::vector<Character *> characters;
	characters.push_back(CharacterFactory::createCharacter(CharacterFactory::healer));
	characters.push_back(CharacterFactory::createCharacter(CharacterFactory::warrior));
	characters.push_back(CharacterFactory::createCharacter(CharacterFactory::wizard));
	for (Character * character : characters)
	{
		character->message();
	}
	system("pause");
	return 0;
}