#include "Move.h"



Move::Move()
{
}

Move::Move(Move && some)
{
	s = move(some.s);
}


Move::~Move()
{
}
