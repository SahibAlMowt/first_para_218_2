#include <iostream>

int main()
{
	const int cx = 10;
	//int &r = cx;
	const int &cr  = cx;
	
	//int *ptr = &cx;
	const int *cptr = &cx;
	
	return 0;
}
