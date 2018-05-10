#pragma once
#include "Dino.h"
#include "Cactus.h"
#include "Ground.h"
#include "Pixels.h"
class Game
{
private:
	Dino dino;
	Ground ground;
	Cactus cactus;
	short width, height;
	Game();
	int score;
public:
	bool isActive;
	int getScore();
	static Game & getInstance();
	~Game();
	void play();
	bool checkIfDinoCrushes();
	bool ifDinoSettles();
	bool isSuccessJump();
};

