#include <iostream>
#include "Progression.h"
using namespace std;


Progression operator +(Progression & a, Progression & b)
{
	Progression c;
	c.setA1(a.getA1() + b.getA1());
	c.setD(a.getD() + b.getD());
	return c;
}


int main()
{
	Progression prog;
	prog.setA1(1);
	prog.setD(2);
	cout << prog[20] << endl; //39
	cout << prog(20) << endl; //400

	Progression a, b;
	a.setA1(5);
	a.setD(1);
	b.setA1(6);
	b.setD(2);
	Progression c = a + b;
	cout << c.getA1() << " " << c.getD() << endl;


	system("pause");
	return 0;
}