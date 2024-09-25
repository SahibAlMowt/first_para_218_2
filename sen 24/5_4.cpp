#include <iostream>
#include <string>
#include <vector>

template<typename T1, typename T2, typename T3>
struct triple
{
	T1 first;
	T2 second;
	T3 third;
};

int main()
{
	triple<int, int, int> point {-1, 3, 2};
	triple<std::string, std::string, int> word_point {"hello", "world", 42};
	return 0;
}

