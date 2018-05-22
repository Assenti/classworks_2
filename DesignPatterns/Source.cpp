#include <iostream>
#include <cassert>
#include <vector>
#include "CharacterFactory.h"
#include "RealFactory.h"
void factoryInvoke()
{
	std::vector<Character *> characters;
	characters.push_back(CharacterFactory::createCharacter(CharacterFactory::healer));
	characters.push_back(CharacterFactory::createCharacter(CharacterFactory::warrior));
	characters.push_back(CharacterFactory::createCharacter(CharacterFactory::wizard));
	for (Character * character : characters)
	{
		character->message();
	}
}
int main()
{
	assert(RealFactory::client()->state == Client::Anonymus);

	assert(RealFactory::client_signed_in()->state == Client::Authenticated);

	assert(RealFactory::client_signed_out()->state == Client::Anonymus);

	system("pause");
	return 0;
}