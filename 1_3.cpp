#include <iostream>
#include <vector>

int main()
{
	int x;
	std::vector<int> data;
	
	/*while(std::cin >> x)
	{
		data.push_back(x);
	}
	std::cout << "ppppppppppppppppppppppppppppppppppppppppppppppp\n";
	for(int e: data)
	{
		std::cout << e << "\n";
	}*/
	
	while(std::cin >> x)
	{
		data.push_back(x);
	}
	
	while(!data.empty() && data.back() == 0)
	{
		data.pop_back();
	}
	std::cout << "ppppppppppppppppppppppppppppppppppppppppppppppp\n";
	for(int e: data)
	{
		std::cout << e << "\n";
	}
	
			
	return 0;
}
