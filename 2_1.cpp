#include <iostream>
#include <string>

int main()
{
	std::string s = "Hello";
	s += ' ';
	s += "world !\n";
	std::string sub1 = s.substr(3,4);
	
//	std::cout << s << "\n";
//	std::cout << sub1 << "\n";
	
	std::string sub2 = s.substr(7);
	
//	std::cout << sub2;

	size_t pos1 = s.find(' ');
	
//	std::cout << pos1 << "\n";
	
	size_t pos2 = s.find(' ', pos1 + 1);//nachinaya s etogo index
	
//	std::cout << pos2;
	
	size_t pos3 = s.find("ll");
	
//	std::cout << pos3;

	size_t pos4 = s.find('#');
	
	std::cout << pos4;
	
	return 0;
}

