#include "Karen.hpp"

Karen::Karen(void)
{
    return ;
}

Karen::~Karen(void)
{
    return ;
}

void    Karen::complain(std::string level)
{
    struct func_list
    {
        std::string     level;
        void(Karen::*funcPtr)();
    };
    int i;

    struct func_list    my_list[4] =
    {
        {"DEBUG", &Karen::debug},
        {"INFO", &Karen::info},
        {"WARNING", &Karen::warning},
        {"ERROR", &Karen::error},
    };
    i = 0;
    while (i < 4)
    {
        if (my_list[i].level == level)
        {
            (this->*my_list[i].funcPtr)();
            break ;
        }
        i++;
    }
    // void(Karen::*funcPtr)();
    // if (level.compare("DEBUG") == 0)
    //    funcPtr = &Karen::debug;
    // else if (level.compare("INFO") == 0)
    //    funcPtr = &Karen::info;
    // else if (level.compare("WARNING") == 0)
    //    funcPtr = &Karen::warning;
    // else if (level.compare("ERROR") == 0)
    //    funcPtr = &Karen::error;
    // else
    //     funcPtr = NULL;
    // (this->*funcPtr)();
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my  7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
    std::cout << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
    std::cout << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std:: endl;
}