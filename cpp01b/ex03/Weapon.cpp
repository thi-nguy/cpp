#include "Weapon.hpp"

Weapon::Weapon(std::string type):
_type(type)
{
    return ;
}

Weapon::Weapon(void)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void    Weapon::setType(std::string choice)
{
    _type = choice;
}

const std::string&      Weapon::getType(void) const
{
    return (_type);
}