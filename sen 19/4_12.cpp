#include <iostream>
#include <algorithm>

struct date
{
	int year = 1970;
	int month = 1;
	int day = 1;
};


bool compare(const date &lhs, const date &rhs)
{
	return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(rhs.year, rhs.month, rhs.day);
	
	/*if(lhs.year != rhs.year)
	{
		return lhs.year < rhs.year;
	}
	if(lhs.month != rhs.month)
	{
		return lhs.month < rhs.month;
	}
	
	return lhs.day < rhs.day;*/
}

int main()
{
	std::vector<date> dates { 
								{2020, 3, 15},
								{2029, 1, 21},
								{2021, 1,30}
							};
						
	for(const auto &[year, month, day]: dates)
	{
		std::cout << year << "." << month << "." << day << "\n";
	}
	
	std::sort(dates.begin(), dates.end(), [](const date &lhs, const date &rhs){return std::tie(lhs.year, lhs.month, lhs.day) < std::tie(rhs.year, rhs.month, rhs.day);});
	
	for(const auto &[year, month, day]: dates)
	{
		std::cout << year << "." << month << "." << day << "\n";
	}
	
	/*if(dates[0] < dates[1])
	{
		std::cout << "gotovo";
	}*/
	
	return 0;
}
