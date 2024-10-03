#include <iostream>
#include <stack>

int main()
{
	std::stack<int> s;
	
	s.push(1);
	s.push(13);
	s.push(15);
	s.push(15);
	s.push(15);
	s.pop();
	
//	std::cout << s.top() << "\n";
	
	if(s.empty())
	{
		std::cout << "stack is empty\n";
	}
	
	while(!s.empty())
	{
		std::cout << s.top() << " ";
		s.pop();
	}
	
	return 0;
}
