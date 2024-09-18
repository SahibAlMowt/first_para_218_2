#include <iostream>
#include <string>

int main()
{
	std::string s = "Hello world";
//	s.insert (5, "std::");
//	std::cout << s << "\n";
	
//	s.replace(0, 3, "Hi");
//	std::cout << s;

	s.erase(5, 3);
	std::cout << s;
	
	return 0;
}
