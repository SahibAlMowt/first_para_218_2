#include <iostream>
#include <list>

int main()
{
	std::list<int> l {5, 10, 15};
	
	auto iter = l.begin();
	
	std::cout << *iter << "\n";
	
	++iter;
	
	std::cout << *iter << "\n";
	
	--iter;
	
	std::cout << *iter << "\n";
	
	return 0;
}
