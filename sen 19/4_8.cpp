#include <iostream>

int main()
{
	int *ptr = nullptr;
	int x = 10;
	ptr = &x;
	std::cout << *ptr << "\n";
	return 0;
}


