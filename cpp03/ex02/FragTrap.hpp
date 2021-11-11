#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap: public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const FragTrap &other_object);
        FragTrap    &operator=(const FragTrap &rhs);
        ~FragTrap(void);
        FragTrap(std::string name);

        void    highFivesGuys(void);
};

#endif