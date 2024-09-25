#include <iostream>

int main()
{
	int x = 10;
	int y = 20;
	
	int *ptr;
	ptr = nullptr;
	ptr = &x;
	std::cout << *ptr << "\n";
	ptr = &y;
	std::cout << *ptr << "\n";
	
	return 0;
}
	
