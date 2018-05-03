#include "Move.h"
#include <iostream>
using namespace std;

int main()
{
	Move m1;
	m1.s = "LOL";
	cout << "BEFORE MOVE m1: " << m1.s << endl;
	Move m2 = move(m1);
	cout << "AFTER MOVE m1: " << m1.s << endl;
	cout << "m2: " << m2.s << endl;


	system("pause");
	return 0;
}