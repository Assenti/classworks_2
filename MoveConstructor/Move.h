#pragma once
#include <string>
using namespace std;

class Move
{
private:
	
public:
	string s;
	Move();
	Move(Move &&);
	~Move();
};

