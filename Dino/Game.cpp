#include "Game.h"
#include <conio.h>

Game::Game()
{
	width = 50, height = 50;
	score = 0;
}

int Game::getScore()
{
	return score;
}

Game & Game::getInstance()
{
	static Game instance;
	return instance;
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
		score += isSuccessJump();
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
				if (!ifDinoSettles())
				{
					dino.isJumping = false;
				}
			}
		}
		isActive = !checkIfDinoCrushes();
		dino.draw();
		ground.draw();
		cactus.draw();
		Sleep(200);
	}
	system("cls");
	Pixels::gotoXY(5, 5);
	cout << "GAME OVER\tSCORE: " << score << endl;
}

bool Game::checkIfDinoCrushes()
{
	for (Pixels & p1 : dino.getBody())
	{
		for (Pixels & p2 : cactus.getBody())
		{
			if (p1 == p2)
			{
				return true;
			}
		}
	}
	return false;
}

bool Game::ifDinoSettles()
{
	return dino.getBody()[3].y < (ground.getBody()[0].y - 1);
}

bool Game::isSuccessJump()
{
	for (Pixels & p1 : dino.getBody())
	{
		for (Pixels & p2 : cactus.getBody())
		{
			if (p1.x == p2.x && p1.y != p2.y)
			{
				return true;
			}
		}
	}
	return false;
}
