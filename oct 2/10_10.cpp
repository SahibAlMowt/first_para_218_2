#include <algorithm>
#include <iostream>
#include <list>

int main()
{
	std::list<int> data {3, 15, 14, 19, 5};
	
//	std::sort(data.begin(), data.end());
	
	data.sort();
	
	for(int e: data)
	{
		std::cout << e << " ";
	}
	
	return 0;
}
