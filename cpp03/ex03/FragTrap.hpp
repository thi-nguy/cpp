#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define FT_HIT_POINT 100
#define FT_ENERGY_POINT 100
#define FT_ATTACK_DAMAGE 30

class FragTrap: virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const FragTrap &other_object);
        FragTrap    &operator=(const FragTrap &rhs);
        virtual ~FragTrap(void);
        FragTrap(std::string name);

        void    highFivesGuys(void);
};

#endif