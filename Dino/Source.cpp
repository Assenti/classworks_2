#include "Game.h"

using namespace std;

int main()
{
	Game & game = Game::getInstance();
	game.play();


	system("pause");
	return 0;
}