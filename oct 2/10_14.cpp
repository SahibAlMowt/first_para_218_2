#include <iostream>
#include <vector>

template <typename T>
void dublicate(std::vector<T>& v)
{
//	std::cout << v.size();
	v.reserve(2 * v.size());
	for(auto it = v.begin(); it != v.end(); ++it)
	{
		v.push_back(*it);
	}
}

int main()
{
	std::vector<int> vt {1, 2, 3};
//	std::cout << "pppppp\n";
	dublicate(vt);
//	std::cout << "hhhhhh\n";
	return 0;
}
