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
	
	linal::Matrix<int> datad(2, 3);
	
	std::cin >> datad;
	std::cout << "\n";
	std::cout << datad;
	
	std::cout << "\n\n";
//	std::cout << datad.getrows() << "\n";
//	std::cout << datad.getcolumus() << "\n";
	
//	int el = data[0][1];
	
//	std::cout << el << "\n";

	data[1][1] = 789;
	data(1, 2) = 987;
	
	/*for(size_t i = 0; i < data.getrows(); i++)
	{
		for(size_t j = 0; j < data.getcolumus(); j++)
		{
			std::cout << data[i][j] << " ";
		}
		
		std::cout << "\n";
	}*/
	
	std::cout << data;
	
	data += datad;
	std::cout << "\n\n";
	std::cout << data;
	
	return 0;
}
