#include <iostream>
#include <vector>
#include <cmath>
#include "Array.h"
#include "Pixel.h"
#include "Vector.h"

//template <typename T>
//T getAverage(vector<T> elements)
//{
//	T sum = elements[0];
//	for (int i = 1; i < elements.size(); i++)
//	{
//		sum += elements[i];
//	}
//	return sum / elements.size();
//}
//
//void sample()
//{
//	Array <int> a(5);
//	//Array<Array<int>> a(5); // creating 2D array
//}
//
//template <class T1, class... T2>
//void print(T1 t1, T2... t2)
//{
//	std::cout << t1 << std::endl;
//	print(t2...);
//}
//
//void print() {}

//template <class... T>
//bool isInRadius(T ... points)
//{
//	int r = 5;
//	for (auto && point : std::initializer_list<Pixel>({ points... }))
//	{
//		if (pow(point.x, 2) + pow(point.y, 2) <= pow(r, 2))
//		{
//			return true;
//		}
//	}
//	return false;
//}

int main()
{
	//std::cout << isInRadius(Pixel{ 2,4 }, Pixel{ 3,3 }, Pixel{ 6,6 }) << std::endl;
	//print(1, '2', "class", 4.5, 110L);

	Vector<int> a(std::initializer_list<int>{1, 2, 3, 4});
	a.push_back(5);
	a.push_back(6);
	//std::cout << a.count() << std::endl;
	a.erase(1);

	for (auto i : a)
	{
		std::cout << i << std::endl;
	}



	system("pause");
	return 0;
}