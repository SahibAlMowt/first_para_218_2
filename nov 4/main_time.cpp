#include "time.h"
#include <iostream>

int main()
{
	
	chront::Time t1;
	chront::Time t2(36000);
	chront::Time t3(23, 59, 61);
	
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
	
	chront::Time t11;
	
	std::cin >> t11;
	
	t11.addseconds(1000);
	
	std::cout << t11 << "\n";
	
	
	return 0;
}
