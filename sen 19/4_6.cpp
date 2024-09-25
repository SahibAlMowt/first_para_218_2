#include <iostream>

int main()
{
	int x = 10;
	const int cx = 15;
	
	int *ptr = &x;
	
	//ptr = &cx;
	
	const int *cptr = &x;
	cptr = &cx;
	
	int * const ptrc = &x;
	//ptrc = nullptr;
	
	++*ptrc;
	
	const int * const cptrc = &x;
	
	return 0;
}
