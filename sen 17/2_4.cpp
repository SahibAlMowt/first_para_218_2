#include <iostream>

enum class color
{
	white,
	red, 
	blue,
	green
};

int main()
{
	color col1 = color::red;
	color col2 = color::green;

	
	int value = static_cast<int> (col2);
	std::cout << value;		
	
	color col3 = static_cast<color> (2);//budet blue
	
	return 0;
}
