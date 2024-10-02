#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> v {5, 5, 2, 2, 4, 6, 5, 8, 9};
	
	auto iter = std::unique(v.begin(), v.end());
	
	for(int e: v)
	{
		std::cout << e << " ";
	}
	
	v.erase(iter, v.end());
	std::cout << "\n";
	for(int e: v)
	{
		std::cout << e << " ";
	}
	
	return 0;
}
