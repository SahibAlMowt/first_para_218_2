#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

void f(std::vector<std::vector<double>> &para)
{
    
	
	int l = para.size();
	
	
	for(int i = 0; i < l; i++)
	{
		para[i][2] = sqrt(para[i][0] * para[i][0] + para[i][1] * para[i][1]);
		
		//std::cout << para[i][2] << " ";
	}
	
	std::sort(para.begin(), para.end());
	
	for(int i = 0; i < l; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << para[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	
}


int main()
{
	int n;
	std::cin >> n;
	std::vector<std::vector<double>> para (n, std::vector<double>(3));
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			para[i][j] = 10 - j -i/2;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			std::cout << para[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	std::cout << "\n\n";
	
	f(para);
	
	return 0;
}
	
