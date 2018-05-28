#include<iostream>
#include<string>


int main()
{
	std::string str = "1591234657890";
	try 
	{
		int x = std::stoi(str);
	}
	catch (std::exception exp)
	{
		std::cout << exp.what() << std::endl;
	}
		


	system("pause");
	return 0;
}