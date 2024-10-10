#include "time.h"

using namespace chront;


Time::Time(int h, int m, int s): hours{h}, minutes{m}, seconds{s}
{	
	/*hours = h;
	minutes = m;
	seconds = s;*/
	
	normilase();
	
}

int Time::gethours() const
{
	return hours;
}

int Time::getminutes() const
{
	return minutes;
}

int Time::getseconds() const
{
	return seconds;
}

void Time::addseconds(int o)
{
	seconds += o;
	normilase();
}

void Time::normilase()
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

Time &Time::operator += (int o)
{
	seconds += o;
	normilase();
	return *this;
}

/*time time::operator + (int o) const
{
	return time(hours, minutes, seconds + o);
}*/
	
Time operator + (const Time &t, int o)
{
	return (t.gethours(), t.getminutes(), t.getseconds() + o);
}

int Time::totalsecond() const
{
	int sd = seconds;
	sd += (minutes * 60);
	sd += (hours *  3600);
	
	return sd;
}

int operator - (const Time &t1, const Time &t2)
{
	return t1.totalsecond() - t2.totalsecond();
} 

std::ostream &operator << (std::ostream &out, const Time &t)
{
	out << t.gethours() << ":" << t.getminutes() << ":" << t.getseconds();
	return out;
}

std::istream &operator >> (std::istream &in, Time &t)
{
	int h;
	int m;
	int s;
	
	char temp;
	
	in >> h >> temp;
	in >> m >> temp;
	in >> s >> temp;
	
	t = Time(h, m, s);
	return in;
}
	
