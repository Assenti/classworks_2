#pragma once
class Progression
{
private:
	int a1, d;
public:
	void setA1(int a1);
	void setD(int d);
	int operator()(int n);
	int operator[](int n);
	Progression();
	~Progression();
};

