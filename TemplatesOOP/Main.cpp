#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T getAverage(vector<T> elements)
{
	T sum = elements[0];
	for (int i = 1; i < elements.size();i++)
	{
		sum += elements[i];
	}
	return sum / elements.size();
}


int main()
{




	system("pause");
	return 0;
}