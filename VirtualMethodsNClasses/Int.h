#pragma once
class Int
{
protected:
	int value;
public:
	int getValue() const;
	virtual void setVAlue(const int &);
	Int();
	virtual ~Int();
};

