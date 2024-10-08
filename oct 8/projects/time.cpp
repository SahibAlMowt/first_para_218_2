#include "time.h"

using namespace chron;


time::time(int h, int m, int s)
{
	m += s / 60;
	s %= 60;
	
	if(s < 0)
	{
		m -= 1;
		s += 60;
	}
	
	h += m / 60;
	m %= 60;
	
	if(m < 0)
	{
		h -= 1;
		m += 60;
	}
	
	h %= 24;
	
	if(h < 0)
	{
		h += 24;
	}
	
	
	hours = h;
	minutes = m;
	seconds = s;
	
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
	
	
