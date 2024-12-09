#include "calc.h"

double calculation(double a, double b)
{
	sam::Calculation s(a , b);
	char c;
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
				if(b == 0)
				{
					std::cout << "don't do this again\n";
					//throw;
				}
				break;
			case '!':
				return 0;
		}
}

double proxodka(std::string str)
{
	for(char c: str)
	{
		if(c == '*' || c == '/')
		{
			
		}
	}
}

int main()
{
	std::string str;
	
	do
	{
		std::getline(std::cin, str);
			
		
		
		
	}while(str != "quit");
	
	
	
	
	return 0;
}
