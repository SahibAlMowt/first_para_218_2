#include <iostream> 

struct point
{
	double x, y, z;
};

int main()
{
	point p = {3.0, 4.0, 5.0};
	point *ptr = &p;
	std::cout << (*ptr).x << "\n";
	std::cout << ptr->x << "\n";
	
	return 0;
}
