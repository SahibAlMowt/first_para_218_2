#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> data {2, 7, 8, 3, 2, 8, 7, 5};
	
	std::cout << std::count(data.begin(), data.end(), 8);

	/*int count;
	count = 0;
	
	for(int e: data)
	{
		if(e == 8)
		{
			++count;
		}
		
	}
	
	std::cout << count;*/
	
	
	return 0;
}
