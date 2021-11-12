#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): _name(name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    ClapTrap::_name = name + "_clap_name";
    _hit_point = FT_HIT_POINT;
    _energy_point = ST_ENERGY_POINT;
    _attack_damage = FT_ATTACK_DAMAGE;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other_object)
: ClapTrap(other_object), ScavTrap(other_object), FragTrap(other_object) 
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = other_object;
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << "DiamonTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        ClapTrap::_name = rhs.ClapTrap::_name;
        _hit_point = rhs._hit_point;
        _energy_point = rhs._energy_point;
        _attack_damage = rhs._attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap - My DiamondTrap name is: " << _name << ". My ClapTrap name is: " << ClapTrap::_name << std::endl;
}