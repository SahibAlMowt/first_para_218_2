#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data {3, 14, 15, 29, 456};//sorted
	
	if(std::binary_search(data.begin(), data.end(), 14))
	{
		std::cout << "found\n";
	}
	else
	{
		std::cout << "not found\n";
	}
	
	/*std::partial_sort(data.begin(), data.begin() + 2, data.end());*/
	
	for(int e:data)
	{
		std::cout << e << " ";
	}
	
	
	return 0;
}
