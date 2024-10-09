#ifndef time_h
#define time_h

namespace chron
{
	class time
	{
	private:	
		int hours;
		int minutes;
		int seconds;
	public:
		time(int h, int m, int s);
		int gethours() const;
		int getminutes() const;
		int getseconds() const;
	};
}

#endif
