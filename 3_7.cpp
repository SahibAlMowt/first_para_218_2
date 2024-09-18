#include <iostream>

int main()
{
	std::string s1 = "Elementary";
	std::string &s2 = s1;
	s1.clear();
	
	std::cout << s2.size() << "\n";
	
	return 0;
}
