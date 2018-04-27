#pragma once
#include "Dino.h"
#include "Cactus.h"
#include "Ground.h"

class Game
{
private:
	Dino dino;
	Ground ground;
	Cactus cactus;
public:
	bool isActive;
	Game();
	~Game();
	void play();
};

