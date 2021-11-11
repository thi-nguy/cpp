#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

#define ST_HIT_POINT 100
#define ST_ENERGY_POINT 50
#define ST_ATTACK_DAMAGE 20

class ScavTrap: virtual public ClapTrap
{
    public:
       ScavTrap(void);
       ScavTrap(const ScavTrap &other_object);
       ScavTrap     &operator=(const ScavTrap &rhs);
       virtual ~ScavTrap();

       ScavTrap(std::string name);
       
       void    attack(std::string const &target); 
       void    guardGate(void);
};

#endif