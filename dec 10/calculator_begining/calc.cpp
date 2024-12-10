#include "calc.h"

sam::Calculation::Calculation(double m,  double n)
{	
	a = m;
	b = n;
	sum = a + b;
	dif = a - b;
	mp = a * b;
	dev = a / b;
}

double sam::Calculation::getres() const
{
	return sum;
}

double sam::Calculation::getdif() const
{
	return dif;
}

double sam::Calculation::getmp() const
{
	return mp;
}

double sam::Calculation::getdev() const
{
	if(b != 0)
	{
		return dev;
	}
	else
	{
		throw std::runtime_error("Division na zero! Don't do this again");
	}
}

double calculator(double a, double b, char c)
{
	sam::Calculation s(a , b);

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
				break;
			case '!':
				return 0;
		}
}

double sam::proxodka(std::string str)
{
    std::vector<double> num;
    std::vector<char> op;

    std::string t; 

    for (char c: str) 
    {
        if (c <= '9' && c >= '0') 
        {
            t += c; 
        }
        else if(c == '.')
        {
			t += c;
		} 
        else 
        {
            if(!t.empty()) 
            {
                num.push_back(sam::str_to_int(t)); 
                t.clear(); 
            }
            if (c == '+' || c == '-' || c == '*' || c == '/')
            {
                op.push_back(c); 
            }
        }
    }

    if (!t.empty()) 
    {
        num.push_back(sam::str_to_int(t));
    }
    
    for(size_t i = 0; i < op.size(); i++)
    {
		if(op[i] == '*' || op[i] == '/')
		{
			

    sam::print(num);
    
    return 5.5;
}

double sam::str_to_int(std::string str)
{

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

    return res;
}

void sam::print(std::vector<double> a)
{
    for(auto it = a.begin(); it != a.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}
