#include <iostream>
#include <string>

int main()
{
	std::string s {"Hello world"};
	
	auto sub = s.substr(1);
	
	sub[0] = 'w';
	
	std::cout << sub << "\n";
	std::cout << s << "\n";
	
	return 0;
}
