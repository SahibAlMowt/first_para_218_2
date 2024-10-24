#include <iostream>
#include <list>

class Logger
{
private:
    const int id = 0;
    inline static int counter = 0;
public:
    Logger()
    {
        std::cout << "Logger();" << " " << id << "\n";
    }
    Logger(int x)
    {
        id = x;
        std::cout << "Logger(int);" << " " << id << "\n";
    }
    ~Logger()
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
    }
    Logger(): id(++counter)
    {
        std::cout << "Logger();" << id << "\n";
    }
    Logger(const )
};

int main()
{
    /*Logger t;
    std::cout << "Hello world\n";*/

   /* Logger x1(1);
    {
        Logger x2(2);
    }
    Logger x3(3);*/

   /* Logger *ptr1 = new Logger(1);
    Logger *ptr2 = new Logger(2);

    delete ptr1;
    delete ptr2;*/

   /* std::list<Logger> loggers(2);

    loggers.pop_front();

    loggers.pop_back();*/

    Logger x1(1);

    Logger x2{x1};

    Logger x3;
    x3 = x1;

    return 0;
}