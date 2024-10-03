#include <iostream>
#include <string>
#include <string_view>
#include <vector>

int main()
{
	std::vector<std::string_view> ls;
	
	for(int i = 0; i != 5; ++i)
	{
		std::string l;
		std::getline(std::cin, l);
		ls.push_back(l);
	}
	
	for(auto it: ls)
	{
		std::cout << it << "\n";
	}
	
	return 0;
}
