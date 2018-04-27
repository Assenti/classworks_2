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
	while (isActive)
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
				break;
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
		dino.draw();
		ground.draw();
		cactus.draw();
		Sleep(200);
	}
	
}
