#include <iostream> 
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> data {3, 5, 1, 0, 9, 14};
	std::sort(data.rbegin(), data.rend());
	//std::ranges::sort(data);//dlya c++20
	
	for(int e: data)
	{
		std::cout << e << " ";
	}
	
	return 0;
}
