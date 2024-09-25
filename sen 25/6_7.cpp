#include <iostream>
#include <list>

int main()
{
	std::list<int> l {0, 10, 15, 20};
	
	auto iter = std::next(l.begin());
	
	std::advance(iter, 2);
	
	return 0;
}       
