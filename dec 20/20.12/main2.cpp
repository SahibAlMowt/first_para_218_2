#include <iostream>
#include <memory>
#include <utility>

int *f()
{
	return new int(17);
}

std::unique_ptr<int> g()
{
	return std::make_unique <int> (17);
}

int main()
{
	f();
	g();
	
	return 0;
}

