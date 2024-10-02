#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	std::vector<int> v {456, 45, 789, 0, 123, 0};
	std::sort(v.begin() + 1, v.end() - 1);
	
	for(size_t j = 0; j < v.size(); j++)
	{
		std::cout << v[j] << " ";
	}
	
	return 0;
}
