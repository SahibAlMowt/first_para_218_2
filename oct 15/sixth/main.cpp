#include <iostream>
#include "matrix.h"
#include <vector>

int main()
{
	linal::Matrix<int>  data({ 
								{1, 2, 3},
								{4, 5, 6}
							});
	
//	std::cout << data.getrows() << "\n";
//	std::cout << data.getcolumus() << "\n";
	
	linal::Matrix<double> datad(3, 4);
	
//	std::cout << datad.getrows() << "\n";
//	std::cout << datad.getcolumus() << "\n";
	
//	int el = data[0][1];
	
//	std::cout << el << "\n";

	data[1][1] = 789;
	data(1, 2) = 987;
	
	for(int i = 0; i < data.getrows(); i++)
	{
		for(int j = 0; j < data.getcolumus(); j++)
		{
			std::cout << data[i][j] << " ";
		}
		
		std::cout << "\n";
	}
	
	
	
	return 0;
}
