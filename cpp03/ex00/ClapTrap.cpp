#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _name("no name"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &other_object)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other_object;
}

ClapTrap::~ClapTrap(void) 
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hit_point = rhs._hit_point;
        _energy_point = rhs._energy_point;
        _attack_damage = rhs._attack_damage;
    }
    return (*this);
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{    
    std::cout << "Constructor called" << std::endl;
}
// ! need to add something else ??

void    ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_point - amount <= 0)
        _hit_point = 0;
    else
        _hit_point -= amount;
    std::cout << _name << " takes " << amount << " damage points" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << _name << " is repaired " << amount << " damage points." << std::endl;
    _hit_point += amount;
}
