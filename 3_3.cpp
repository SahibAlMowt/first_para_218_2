#include <iostream>
#include <tuple>

enum class color
{
	white,
	black,
	red,
	blue,
};

struct point
{
	double x = 0.1;
	double y = 0.0;
	double z = 0.0;
	color col;
};

int main()
{
	std::tuple<int, double, point> t {42, 3.14, {.col = color::red}};
	std::cout << std::get<0>(t) << "\n";
	std::cout << std::get<1>(t) << "\n";
	std::cout << std::get<2>(t).x << "\n";
	std::get<2>(t).col = color::black;
	
	return 0;
}











