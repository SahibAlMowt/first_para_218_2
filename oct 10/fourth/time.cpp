#include "time.h"

using namespace chront;


Time::Time(int h, int m, int s)
{	
	totalseconds = h * 3600 + m * 60 + s;
	normalise();
}

int Time::gethours() const
{
	return totalseconds / 3600;
}

int Time::getminutes() const
{
	return (totalseconds % 3600) / 60;
}

int Time::getseconds() const
{
	return (totalseconds % 60);
}

void Time::addseconds(int o)
{
	totalseconds += o;
	normalise();
}

void Time::normalise()
{
	totalseconds %= 3600 * 24;
	if(totalseconds < 0)
	{
		totalseconds += 3600 * 24;
	}
}

int Time::totalsecond() const
{
	return totalseconds;
}

Time &Time::operator += (int o)
{
	totalseconds += o;
	normalise();
	return *this;
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


