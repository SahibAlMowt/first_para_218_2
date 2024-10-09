#include "time.h"

using namespace chron;


time::time(int h, int m, int s): hours{h}, minutes{m}, seconds{s}
{	
	/*hours = h;
	minutes = m;
	seconds = s;*/
	
	normilase();
	
}

int time::gethours() const
{
	return hours;
}

int time::getminutes() const
{
	return minutes;
}

int time::getseconds() const
{
	return seconds;
}

void time::addseconds(int o)
{
	seconds += o;
	normilase();
}

void time::normilase()
{
	minutes += seconds / 60;
	seconds %= 60;
	
	if(seconds < 0)
	{
		minutes -= 1;
		seconds += 60;
	}
	
	hours += minutes / 60;
	minutes %= 60;
	
	if(minutes < 0)
	{
		hours -= 1;
		minutes += 60;
	}
	
	hours %= 24;
	
	if(hours < 0)
	{
		hours += 24;
	}

}

time &time::operator += (int o)
{
	seconds += o;
	normilase();
	return *this;
}

/*time time::operator + (int o) const
{
	return time(hours, minutes, seconds + o);
}*/
	
time operator + (const time &t, int o)
{
	return (t.gethours(), t.getminutes(), t.getseconds() + o);
}

int time::totalsecond() const
{
	int sd = seconds;
	sd += (minutes * 60);
	sd += (hours *  3600);
	
	return sd;
}

int operator - (const time &t1, const time &t2)
{
	return t1.totalsecond() - t2.totalsecond();
} 

std::ostream& operator<< (std::ostream &out, const time &t)
{
	out << t.gethours() << ":" << t.getminutes() << ":" << t.getseconds();
	return out;
}
	
