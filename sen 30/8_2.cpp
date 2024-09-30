#include <iostream>
#include <map>

int main()
{
	std::multimap<std::string, int> positions;
	std::string word;
	int position = 0;
	while(std::cin >> word)
	{
		positions.insert({word, position});
		++position;
	}
	
	for(const auto &[word, position]: positions)
	{
		std::cout << word << "\t" << position << "\n";
	}
	
	return 0;
}
