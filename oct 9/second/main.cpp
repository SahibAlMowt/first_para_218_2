#include "time.h"
#include <iostream>

bool atime(const chron::time &time)
{
	return time.gethours() >= 12;
}

int main()
{
	chron::time t1;
	chron::time t2(36000);
	chron::time t3(23, 59, 61);
	
	std::cout << t1.gethours() << ":";
	std::cout << t1.getminutes() << ":";
	std::cout << t1.getseconds() << "\n";
	
	std::cout << t2.gethours() << ":";
	std::cout << t2.getminutes() << ":";
	std::cout << t2.getseconds() << "\n";
	
	std::cout << t3.gethours() << ":";
	std::cout << t3.getminutes() << ":";
	std::cout << t3.getseconds() << "\n";
	
	std::cout << t2.totalsecond() << "\n";
	std::cout << (t1 - t2) << "\n";
	
	std::cout << t1 << "\n";
	
	
	return 0;
}
