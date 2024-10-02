#include <iostream>
#include <string> 
#include <algorithm>

int main()
{
	std::string s = "worKlLLL";
	
	std::cout << std::count_if(s.begin(), s.end(), [](char c){return 'A' <= c && c <= 'Z';}) << "\n";
	
	
	return 0;
}
