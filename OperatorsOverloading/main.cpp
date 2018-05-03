#include <iostream>
#include "Progression.h"

using namespace std;

int main()
{
	Progression prog;
	prog.setA1(1);
	prog.setD(2);

	cout << prog[20] << endl; //39
	cout << prog(20) << endl; //400



	system("pause");
	return 0;
}