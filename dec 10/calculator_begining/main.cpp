#include "calc.h"

int main()
{
    std::string str;
	
	do
	{
		std::getline(std::cin, str);
			
		sam::proxodka(str);
		
		
	}while(str != "quit");


    return 0;
}