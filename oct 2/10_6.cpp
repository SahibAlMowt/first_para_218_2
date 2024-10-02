#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string s = "no lemon, no melon";
	std::reverse(s.begin(), s.end());
	
	std::cout << s << "\n";
	
	return 0;
}
