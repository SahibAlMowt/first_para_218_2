#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<int> data = {1, 2, 3, 4, 5};// bez ravno srazu inizializiruyetsya
	for(int element: data)
	{
		std::cout << element << " ";
	}
	
	std::cout << "\n";
	
	std::vector<std::string> v1;
	std::vector<std::string> v2(5);
	std::vector<std::string> v3(5, "hello ");
	
	for(std::string e: v3)
	{
		std::cout << e << " ";
	}
	
	std::cout <<"\n";
	
	//int a = data[0];
	//int b = data[4];
	
	data[2] = -3;

	//std::cout << data[42] << "\n";
	std::cout << data.at(0) << "\n";
	//std::cout << data.at(42) << "\n";
	std::cout << data.size() << "\n";
	std::cout << data.front() << "\n";
	std::cout << data.back() << "\n";
	
	int *t = data.data();
	std::cout << *t << "\n";
	
	return 0;
} 
