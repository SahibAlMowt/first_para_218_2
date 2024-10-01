#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <unordered_set>

std::string f(std::string word)
{
	size_t j = 0;
	while(j < word.size())
	{
		if(word[j] < 47 && word[j] > 33)
		{
		//	std::cout << "h\t";
		//	word.resize(j);
			word.erase(j);
		//	std::cout << word;
			return word;
		}
		j++;
	}
	
	return word;
}	

int main()
{
	
	std::ifstream fin("love.txt");
	std::unordered_set<std::string> l;
	std::string lword;
	while(fin >> lword)
	{
		l.insert(lword);
	}
	
	std::map<std::string, int> s;
	std::string word;
	
	while(std::cin >> word)
	{
		if(l.contains(f(word)))
		{
			++s[f(word)];
		}
	}
	
	for(const auto &[word, count]: s)
	{
		std::cout << word << "\t" << count << "\n";
	}
	
/*	std::vector<std::string> l;
	std::string lword;
	
	while(fin >> lword)
	{
		l.push_back(lword);
	}
	size_t i = 0;
	for(const auto &[word, count]: s)
	{
		while(i < l.size())
		{
			if(f(word) == l[i])
			{
				std::cout << word << "\t" << count << "\n";
			}
			i++;
		}
		i = 0;
	}*/
	
	/*for(const auto &[word, count]: s)
	{
		std::cout << word << "\t" << count << "\n";
	}
	std::cout << "--------------------\n";
	for(std::string e: l)
	{
		std::cout << e << "\n";
	}*/
	
	fin.close();
	
	return 0;
}
