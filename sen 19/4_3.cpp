#include <iostream>

int main()
{
	int x = 10;
	int &r = x;
	
	const int &cr = x;
	
	++x;
	++r;
	//++cr; fail
	
	return 0;
}
