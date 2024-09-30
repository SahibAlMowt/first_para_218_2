#include <iostream>
#include <set>
#include <unordered_set>
#include <string>

int main()
{
	std::unordered_set<std::string> words;
	std::set<std::string> duplicate_words;
	std::string word;
	
	while(std::cin >> word)
	{
		/*if(words.contains(word))
		{
			duplicate_words.insert(word);
		}
		else
		{
			words.insert(word);
		}*/
		auto[iter, has_been_inserter] = words.insert(word);
		if(!has_been_inserter)
		{
			duplicate_words.insert(word);
		}
	}
	
	
	for(const auto &word: duplicate_words)
	{
		std::cout << word << "\n";
	}
	
	return 0;
}
