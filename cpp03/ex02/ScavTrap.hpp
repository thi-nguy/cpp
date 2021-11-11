#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap: public ClapTrap //whatever public in ClapTrap is public in ScavTrap
{
    public:
       ScavTrap(void);
       ScavTrap(const ScavTrap &other_object);
       ScavTrap     &operator=(const ScavTrap &rhs);
       ~ScavTrap();

       ScavTrap(std::string name);
       
       void    attack(std::string const &target); 
       void    guardGate(void);
};

#endif