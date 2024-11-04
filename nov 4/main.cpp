#include <iostream>

struct WrongAgeException
{
	int age;
};

int ReadAge()
{
	std::cin.exceptions(std::istream::failbit);
	
	int age;
	
	std::cin >> age;
	
	if(age < 0 || age >= 128)
	{
		//return -1; first
		throw WrongAgeException(age);
	}
	
	return age;
}

int main()
{
	/*if(int age = ReadAge(); age == -1)
	{
		std::cout << "error\n";
	}
	else
	{
		std::cout << age << "\n";
	}*/
	
	try 
	{
		int age = ReadAge();
		std::cout << age << "\n";
	}
	catch(const WrongAgeException &ex)
	{
		std::cerr << "Age is not correct:" << ex.age <<"\n";
		return 1;
	}
	catch(const std::istream::failure &ex)
	{
		std::cerr << "Failed toread stream:" << ex.what() << "\n";
		return 1;
	}
	catch(...)
	{
		std::cout << "Unknown exception\n";
		return 1;
	}
	
	return 0;
}
