#include <iostream>

enum class color
{
	white,
	black,
	red,
	blue,
};

struct point 
{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
	color col;
};

int main()
{
	point p1;
	p1.col = color::black;
	point p2 = {1.4, -2.2, -3.98, color::red};
	p2.z = 32;
	p2.x += 2;
	
	std::cout << sizeof(p1) << "\n";
	std::cout << sizeof(double) << "\n";
	std::cout << sizeof(color) << "\n";
	
	return 0;
}
