#include <iostream> 
#include <algorithm>
#include <unordered_map>
#include <string>
#include <tuple>
#include <vector>
#include <fstream>

int main()
{
	std::unordered_map<std::string, int> freqs;
	std::string word;
	
	while(std::cin >> word)
	{
		++freqs[word];
	}
	
	std::vector<std::pair<std::string, int>> sortedbyfreqs(freqs.begin(), freqs.end());
	
	std::sort(sortedbyfreqs.begin(), sortedbyfreqs.end(), [](const auto &p1,const auto &p2){ return std::tie(p2.second, p1.first) < std::tie(p1.second, p2.first);});
	
	std::ofstream fout("res.txt");
	
	for(const auto &[word, freq]: sortedbyfreqs)
	{
		fout << word << "\t" << freq << "\n";
	}
	
	return 0;
}
