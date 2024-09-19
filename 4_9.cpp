#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> words {"hello", "world", "o"};
		
	std::string &r = words[0];
	
	words.clear();
	std::cout << r << "\n";
	// undefined
	
	return 0;
}
