#include <iostream>
#include <deque>
#include <string>

void doTrain(int num, std::deque<int> &v, std::string word)
{
	if(word == "+l")
	{
		v.push_front(num);
	}
	else if(word == "+r")
	{
		v.push_back(num);
	}
	else if(word == "-l")
	{
		int m = v.size();
		if(num > m)
		{
			v.clear();
			return;
		}
		auto iter1 = v.begin();
		auto iter2 = v.begin() + num;
		
		v.erase(iter1, iter2);
	}
	else if(word == "-r")
	{	
		int m = v.size();
		if(num > m)
		{
			v.clear();
			return;
		}
		auto iter1 = v.end() - num;
		auto iter2 = v.end();
		
		v.erase(iter1, iter2);
	}
}

int main()
{
	std::deque<int> v;
	std::string word;
	int num;
	
	while(std::cin >> word >> num)
	{
		doTrain(num, v, word);
	}
	
	for(int e: v)
	{
		std::cout << e << " ";
	}
		
	return 0;
}
