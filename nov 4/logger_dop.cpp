#include <iostream>
#include <exception>

//-----------------------------------------------
class Logger
{
private:
    int id = 0;
    inline static int counter = 0;
public:
    /*Logger()
    {
        std::cout << "Logger();" << " " << id << "\n";
    }*/
    Logger(int x)
    {
        id = x;
        std::cout << "Logger(int);" << " " << id << "\n";
    }
    /*~Logger()
    {
        std::cout << "~Logger();" << " " << id << "\n";
    }
    Logger(const Logger &other)
    {
        id = other.id;
        std::cout << "Logger(copy);" << " " << id << "\n";
    }
    Logger &operator = (const Logger &other)
    {
        id = other.id;
        return *this;
    }*/
    Logger(): id(++counter)
    {
        std::cout << "Logger(); " << id << "\n";
    }
    Logger(const Logger &other): id (++counter)
    {
        std::cout << "Logger(copy); " << id << "\n";
    }
    Logger &operator = (const Logger &other)
    {
        std::cout << "Logger = " << id << "\n";
        return *this;
    } 
    ~Logger()
    {
        --counter;
        std::cout << "~Logger(); " << id << "\n";
    }
    Logger(Logger &&other): id(++counter)
    {
		std::cout << "Logger(&&); " << id << "\n";
	}
	Logger &operator = (Logger &&other)
	{
		std::cout << " = && " << id << "\n";
		return *this;
	}
};

class InheritedLogger: public Logger
{
public:
	InheritedLogger()
	{
		std::cout << "InheritedLogger(); \n";
	}
	~InheritedLogger()
	{
		std::cout << "~InheritedLogger(); \n";
	}
};

void f(const Logger &x)
{
	std::cout << "void f\n";
}

void f(Logger &&x)
{
	std::cout << "void f_temp\n";
}

void f_v()
{
	std::cout << "void f\n";
	Logger x;
	throw std::exception();
}
//-----------------------------------------------

class C
{
private:
	Logger x;
	
public:
	C()
	{
		std::cout << "C()\n";
		Logger y;
		throw std::exception();
	}
	~C()
	{
		std::cout << "~C()\n";
	}
};

int main()
{
	try
	{
		C c;
	}
	catch(const std::exception &)
	{
		std::cerr << "Something Bad\n";
	}
	
	return 0;
}
