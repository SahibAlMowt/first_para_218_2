#include <iostream>
#include <functional>
#include <vector>
#include <queue>

int main()
{
	std::priority_queue<int, std::vector<int>, std::greater<int>> p1;
	
	for(int x: {3, 14, 15, 29, 5, 54})
	{
		p1.push(x);
	}
	
	while(!p1.empty())
	{
		std::cout << p1.top() << " ";
		p1.pop();
	}
	
	return 0;
}
