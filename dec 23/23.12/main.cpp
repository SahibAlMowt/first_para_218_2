#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;

int128_t boost_product(long long A, long long B)
{
	int128_t ans = (int128_t)A * B;
	return ans;	
}

cpp_int boost_factorial(int num)
{
	cpp_int fact = 1;

	for(int i = num; i > 1; i--)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	/*long long first = 123456789;
	long long second = 987654321;
	
	std::cout << "product of " << first << " and " << second << " is " << boost_product(first, second) << "\n";
	
	return 0;*/

	int num = 32;

	std::cout << "factorial of " << num  << " is " << boost_factorial(num);

	return 0;

}

