#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string     _name; // this must be before Weapon. Because in constructor it is before
        Weapon          &_weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void);
};

#endif