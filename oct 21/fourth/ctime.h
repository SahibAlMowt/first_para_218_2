#ifndef time_h
#define time_h

#include <iostream>

namespace chront
{
	class Time
	{
	private:	
		void normalise();
		int totalseconds = 0;
	public:
		Time() = default;
		Time(int h, int m, int s);
		int gethours() const;
		int getminutes() const;
		int getseconds() const;
		Time(int p): Time(0, 0, p){};
		void addseconds(int o);
		Time &operator += (int o);
		int totalsecond() const;
	};	
}
int operator - (const chront::Time &t1, const chront::Time &t2);
std::ostream &operator << (std::ostream &out, const chront::Time &t);
std::istream &operator >> (std::istream &in, chront::Time &t);

#endif
