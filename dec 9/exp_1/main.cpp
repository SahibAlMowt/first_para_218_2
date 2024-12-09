// switch (char)
#include <iostream>
#include "func.h"


int main()
{	
	
	double m;
	double n;
	char c;
	std::cout << "Enter your example\n";
	std::cout << "For exit press '!'\n";
	while(std::cin >> m >> c >> n)
	{
		sam::Calculation s(m , n);
	
		switch(c)
		{
			case '+':
				std::cout << "result = " << s.getres() << "\n";
				break;
			case '-':
				std::cout << "result = " << s.getdif() << "\n";
				break;
			case '*':
				std::cout << "result = " << s.getmp() << "\n";
				break;
			case '/':
				std::cout << "result = " << s.getdev() << "\n";
				if(n == 0)
				{
					std::cout << "don't do this again\n";
				}
				break;
			case '!':
				return 0;
		}
	}
	
		
	return 0;
}
