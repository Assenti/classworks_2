#include "PosInt.h"

void PosInt::setValue(const int & _value)
{
	if (_value >= 0)
	{
		value = _value;
	}
}

PosInt::PosInt()
{
}


PosInt::~PosInt()
{
}
