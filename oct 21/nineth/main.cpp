#include <iostream>

class Logger
{
public:
    Logger()
    {
        std::cout << "Loggeer();\n";
    }
    ~Logger()
    {
        std::cout << "~Logger();\n ";
    }
};

int main()
{
    Logger t;
    std::cout << "Hello world\n";

    return 0;
}