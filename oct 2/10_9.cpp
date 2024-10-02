#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int main()
{
	std::vector<int> v {3, 14, 15, 59, 2};
	std::list<int> l;
	
	std::copy(v.begin(), v.end(), std::back_inserter(l));
	
	for(int e: l)
	{
		std::cout << e << " ";
	}
	
	return 0;
}
