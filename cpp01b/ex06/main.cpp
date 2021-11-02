#include "Karen.hpp"

enum    Type
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    OTHER_ARG
};

int     main(int ac, char **av)
{
    Karen   karen;
    Type    operation;
    std::string     arg;

    if (ac != 2)
    {
        std::cout << "Need an argument" << std::endl;
        return (0);
    }
    arg = av[1];
    if (arg.compare("DEBUG") == 0)
        operation = DEBUG;
    if (arg.compare("INFO") == 0)
        operation = INFO;
    if (arg.compare("WARNING") == 0)
        operation = WARNING;
    if (arg.compare("ERROR") == 0)
        operation = ERROR;
    switch (operation)
    {
        default:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break  ;
        }
        case DEBUG:
        {
            std::cout << "[ DEBUG ]" << std::endl;
            karen.complain("DEBUG");
        }
        case INFO:
        {
            std::cout << "[ INFO ]" << std::endl;
            karen.complain("INFO");
        }
        case WARNING:
        {
            std::cout << "[ WARNING ]" << std::endl;
            karen.complain("WARNING");
        }
        case ERROR:
        {
            std::cout << "[ ERROR ]" << std::endl;
            karen.complain("ERROR");
        }
    }
    return (0);
}