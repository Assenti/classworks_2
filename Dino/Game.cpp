#include "Game.h"
#include <conio.h>

Game::Game()
{
}

Game::~Game()
{
}

void Game::play()
{
	isActive = true;
	while (true)
	{
		system("cls");
		cactus.move();
		if (_kbhit())
		{
			char action = _getch();
			switch (action)
			{
			case 'w':
				dino.jump();
				dino.isJumping = true;
			case 'q':
				isActive = false;
				break;
			default:
				break;
			}
		}
		else
		{
			if (dino.isJumping)
			{
				dino.settle();
				dino.isJumping = false;
			}
		}
		ground.draw();
		cactus.draw();
		dino.draw();
		Sleep(200);
	}
	
}
