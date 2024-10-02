#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v {3, 14, 15, 29, 5};
	std::list<int> l (10);
	
	
	auto iter = std::copy(v.begin(), v.end(), l.begin());
	
	for(int e: l)
	{
		std::cout << e << " ";
	}
	
	l.erase(iter, l.end());
	
	
	std::cout << "\n";
	for(int e: l)
	{
		std::cout << e << " ";
	}
	
	return 0;
}
