#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

using boost::multiprecision::cpp_dec_float_50;

template <typename T> inline T area_of_circle(T r)
{
	using boost::math::constants::pi;
	return pi<T>() * r * r;
}

int main()
{	
	float rad_f = 123.0 / 100;
	float area_f = area_of_circle(rad_f);
	
	double rad_d = 123.0 / 100;
	double area_d = area_of_circle(rad_d);
	
	cpp_dec_float_50 rad_mp = 123.0 / 100;
	cpp_dec_float_50 area_mp = area_of_circle(rad_mp);
	
	std::cout << "float " << std::setprecision(std::numeric_limits<float>::digits10) << area_f << "\n";
	std::cout << "double " << std::setprecision(std::numeric_limits<double>::digits10) << area_d << "\n";
	std::cout << "boost " << std::setprecision(std::numeric_limits<cpp_dec_float_50>::digits10) << area_mp << "\n";
	
	//-----------------------------------------------------------------------------------------------
	//don't smoke this
	
	/*int a = 12;
	int ac = area_of_circle(a);
	std::cout << "int " << std::setprecision(std::numeric_limits<int>::digits10) << ac << "\n";
	
	char c = '4';
	char cc = area_of_circle(c);
	std::cout << "char " << std::setprecision(std::numeric_limits<char>::digits10) << cc << "\n";
	
	std::string s = "area";
	std::string sc = area_of_circle(s);
	std::cout << "str " << std::setprecision(std::numeric_limits<std::string>::digits10) << sc << "\n";*/
	
	return 0;
}
