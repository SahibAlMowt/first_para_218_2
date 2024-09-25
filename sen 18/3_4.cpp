#include <iostream>
#include <utility>

int main()
{
	std::pair<std::string, int> p {"hello", 5};
	auto[word, num] = p;
	
	
	std::cout << word << "\n";
	std::cout << num << "\n";
	return 0;
}
