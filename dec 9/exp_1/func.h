#ifndef func_h
#define func_h

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
