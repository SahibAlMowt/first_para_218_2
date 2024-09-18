#include <iostream>
#include <vector>
#include <string>


int main()
{
	std::vector<int> data {1, 2, 3, 4, 5};
	data.reserve(10);
	data.resize(3);
	for(int e: data)
	{
		std::cout << e << " ";
	}
	
	std::cout << "\n";
	
	data.resize(6);
	for(int e: data)
	{
		std::cout << e << " ";
	}
	
	return 0;
}

