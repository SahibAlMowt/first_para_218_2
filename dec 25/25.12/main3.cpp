#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string input = "MSU\tBaku Lab\t";
	std::vector<std::string> result;
	
	boost::split(result, input, boost::is_any_of(" "));
	
	for(std::string iter: result)
	{
		std::cout << iter << "\n";
	}
	
	return 0;
}
