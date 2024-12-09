#include <iostream>
#include "func.h"

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
		return dev;
	}
}
