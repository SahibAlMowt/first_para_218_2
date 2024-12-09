#ifndef calc_h
#define calc_h

#include <iostream>
#include <vector>
#include <string>

namespace sam
{
	class Calculation
	{
	private:
		double a;
		double b;
		double sum;
		double dif;
		double mp;
		double dev;		
	public:
		Calculation(double m, double n);
		double getres() const;
		double getdif() const;
		double getmp() const;
		double getdev() const;
	};
}

#endif
