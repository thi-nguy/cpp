#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string     _type;
    
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon(void);
        void                setType(std::string choice);
        const std::string   &getType(void) const;
};

#endif