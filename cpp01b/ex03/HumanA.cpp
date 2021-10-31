#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: _name(name), _weapon(weapon) // meaning: _name = name, _weapon = weapon. Why _name = name , _weapon = weapon does not work.
{
    return  ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
    return ;
}