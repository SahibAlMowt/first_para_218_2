#include "time.h"
#include <iostream>

bool atime(const chront::Time &time)
{
	return time.gethours() >= 12;
}

int main()
{
/*	chront::cronttime t1;
	chront::cronttime t2(36000);
	chront::cronttime t3(23, 59, 61);
	
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
	std::cout << (t1 - t2) << "\n";   */
	
	chront::Time t1;
	
	std::cin >> t1;
	
	t1.addseconds(1000);
	
	std::cout << t1 << "\n";
	
	
	return 0;
}
