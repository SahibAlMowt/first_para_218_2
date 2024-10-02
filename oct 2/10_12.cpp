#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> data {1, 4, 5, 5, 7, 7, 14, 49};
	
	auto iter1 = std::lower_bound(data.begin(), data.end(), 15);
	auto iter2 = std::upper_bound(data.begin(), data.end(), 14);
	
	std::cout << *iter1 << "\n";
	
	for(auto iter = iter1; iter != iter2; ++iter)
	{
		std::cout << *iter << " ";
	}
	
	return 0;
}
