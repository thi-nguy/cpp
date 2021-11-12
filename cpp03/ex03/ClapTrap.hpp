#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected: //only inherited classes and this class can access.
        std::string     _name;
        int             _hit_point;
        int             _energy_point;
        int             _attack_damage;
    
    public:
        ClapTrap(void);
        ClapTrap(const ClapTrap &other_object);
        virtual ~ClapTrap(void);
        ClapTrap    &operator=(const ClapTrap &rhs);

        ClapTrap(std::string name);

        virtual void    attack(std::string const &target); // is redefined in inherited class.
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif