#include <iostream>
#include <memory>
#include <utility>

void sendIn(std::unique_ptr <int> x)
{
	//
}

int main()
{
	auto smart = std::make_unique <int> ();
	
	sendIn(std::move(smart));
	
	//
	
	return 0;
}
