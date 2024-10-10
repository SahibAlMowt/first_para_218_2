#ifndef time_h
#define time_h

#include <iostream>

namespace chront
{
	class Time
	{
	private:	
		int hours = 0;
		int minutes = 0;
		int seconds = 0;
		void normilase();
	public:
		Time() = default;
		Time(int h, int m, int s);
		int gethours() const;
		int getminutes() const;
		int getseconds() const;
		Time(int p): Time(0, 0, p){};
		void addseconds(int o);
		Time &operator += (int o);
		//time operator + (int o) const;
		int totalsecond() const;
	};
	Time operator+ (const Time &t, int o);
	
}
int operator- (const chront::Time &t1, const chront::Time &t2);
std::ostream &operator << (std::ostream &out, const chront::Time &t);
std::istream &operator >> (std::istream &in, chront::Time &t);

#endif
