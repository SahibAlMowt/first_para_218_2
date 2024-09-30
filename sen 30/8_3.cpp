#include <iostream>
#include <iterator>
#include <map>
#include <string>

int main()
{
	std::map<int, std::string> numbers {
											{100, "hundred"},
											{3, "three"},
											{7, "seven"},
											{42, "fourty two"},
											{11, "eleven"}
										};
										
	auto iter = numbers.find(42);
	
	if(iter != numbers.end())
	{
		const auto &[key, value] = *iter;
		std::cout << "found " << key << ": " << value << "\n";
	
		if(iter != numbers.begin())
		{
			const auto &[key, value] = *std::prev(iter);
			std::cout << "previous " << key << ": " << value <<"\n";
		}
		else
		{
			std::cout << "no prev element\n";
		}
	
		if(auto nextiter = std::next(iter); nextiter != numbers.end())
		{
			const auto &[key, value] = *nextiter;
			std::cout << "next " << key << ": " << value << "\n";
		}
		else
		{
			std::cout << "no next element\n";
		}
	}
	else
	{
		std::cout << "not found\n";
	}
	
	return 0;
}
	
	
