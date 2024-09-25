#include <iostream>
#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string> &parts)
{
	std::string result; 
	for(const auto &part: parts)
	{
		result += part;
	}
	
	return result;
}

int main()
{
	/*std::string line;
	std::getline(std::cin, line);*/
	
	std::vector<std::string> parts {"ab", "da", "gs"};
	std::cout << concatenate(parts);
	
	return 0;
}
	
