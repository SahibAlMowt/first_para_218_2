#include <iostream>

int main()
{
	int x = 10;
	int *ptr = &x;
	++x;
	
	std::cout << *ptr << "\n";
	
	return 0;
}
