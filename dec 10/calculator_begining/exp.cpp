#include "calc.h"

int main()
{
	std::string str;
	
	str = "123.567";
	
	int t = 0;
	double d = 0;
	
	bool flag = false;
	
    for(char c: str)
    {
		if(c == '.')
		{
			flag = true;
		}
		if(!flag)
		{
			t = t * 10 + (c - '0');
		}
		if(flag && c != '.')
		{
			d = d * 10 + (c - '0');
			std::cout << "d === " << d << "\n";
		}
    }
    
    int dc = d;
    int c = 0;
    
    while(dc > 0)
    {
		dc /= 10;
		c++;
	}
	
	d = d / pow(10, c);
	
	double res = t + d;
	
	std::cout << t << " " << d << " " << res << "\n";
	
	return 0;
}
