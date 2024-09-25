#include <iostream>
#include <vector>

int main()
{
	std::vector<int> data {1, 2, 3, 4, 5};
	std::cout << data.capacity() << "\n";
	data.push_back(6);
	std::cout << data.capacity() << "\n";
	
	return 0;
}
