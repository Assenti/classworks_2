#include "Airplane.h"

using namespace std;

int main()
{
	Airplane one("Boeing", 100, Middle);
	Airplane two("Tu", 120, Big);
	bool result = one < two;
	//cout << result << endl;
	cout << one.getPassengers() << endl;
	++one;
	cout << one.getPassengers() << endl;

	system("pause");
	return 0;
}