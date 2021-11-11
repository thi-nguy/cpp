#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string     _name;

    public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &other_object);
        DiamondTrap  &operator=(const DiamondTrap &rhs);
        ~DiamondTrap();

        void    whoAmI(void);
};

#endif