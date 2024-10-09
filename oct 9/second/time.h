#ifndef time_h
#define time_h
#include <ostream>

namespace chron
{
	class time
	{
	private:	
		int hours = 0;
		int minutes = 0;
		int seconds = 0;
		void normilase();
	public:
		time() = default;
		time(int h, int m, int s);
		int gethours() const;
		int getminutes() const;
		int getseconds() const;
		time(int p): time(0, 0, p){};
		void addseconds(int o);
		time &operator += (int o);
		//time operator + (int o) const;
		int totalsecond() const;
	};
	time operator+ (const time &t, int o);
	
}
int operator- (const chron::time &t1, const chron::time &t2);
std::ostream &operator << (std::ostream &out, const chron::time &t);

#endif
