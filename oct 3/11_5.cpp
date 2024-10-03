#include <iostream>
#include <string>
#include <string_view>

int main()
{
	std::string s {"Hello guys! How do u do?"};
	
	std::string_view sv = s;
	
	sv.remove_prefix(5);
	sv.remove_suffix(12);
	
	std::cout << sv << "\n";
	std::cout << s << "\n";
	
	
	return 0;
}
