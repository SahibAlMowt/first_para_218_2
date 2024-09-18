#include <iostream>

int main()
{
	int x = 10;
	int &r = x;
	++x;
	std::cout << r << "\n";
	
	return 0;
}
