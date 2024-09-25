#include <iostream>

int main()
{
	int x = 10;
	int &r = x;
	
	const int &cr = x;
	
	++x;
	++r;
	//++cr; fail
	
	int *ptr = &x;
	const int *cptr = &x;
	
	++*ptr;
	//++*cptr; fail
	
	return 0;
}
