#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string     _name;
        int             _hit_point;
        int             _energy_point;
        int             _attack_damage;
    
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap    &operator=(const ClapTrap &rhs);
        ClapTrap(const ClapTrap &other_object);
        ~ClapTrap(void);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif