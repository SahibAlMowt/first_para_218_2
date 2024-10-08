#include <iostream>
#include "time.h"

bool atime(const chron::time &time)
{
	return time.gethours() >= 12;
}

int main()
{
	chron::time t(13, 30, 0);
	
	std::cout << t.getminutes() << "\n";
	
	if(atime(t))
	{
		std::cout << t.gethours() - 12 << " Pm\n";
	}
	
	
	return 0;
}
