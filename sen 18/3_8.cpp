#include <iostream>

int main()
{
	int x = 10;
	/*int &r;
	r = x;
	std::cout << r << "\n";*/
	int &r = x;
	int y = 20;
	r = y;
	std::cout << x << "\n";
	return 0;
}

//fail, mistake, error
