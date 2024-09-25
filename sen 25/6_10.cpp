#include <iostream>
#include <map>
#include <string> 

int main()
{
	std::map<std::string, int> years {
										{"Moscow", 1900},
										{"Rome", 1800},
										{"London", 1700}
									};
									
	for(const auto &[city, year] : years)
	{
		std::cout << city << ":" << year << "\n";
	}
	
	return 0;
} 
