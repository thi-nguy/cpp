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
}

void    Karen::debug(void)
{
    std::cout << "[DEBUG] I love to get extra bacon for my  7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "[INFO] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
    std::cout << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
    std::cout << std::endl;
}

void    Karen::error(void)
{
    std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now.";
    std::cout << std:: endl;
}