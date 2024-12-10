#ifndef calc_h
#define calc_h

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <cmath>

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

    double calculator(double a, double b, char c);
    double proxodka(std::string str);
    double str_to_int(std::string str);
    void print(std::vector<double> a);
}

#endif
