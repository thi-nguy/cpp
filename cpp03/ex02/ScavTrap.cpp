#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    _name = name;
    _hit_point = 100;
    _energy_point = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other_object): ClapTrap(other_object)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = other_object;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrav Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hit_point = rhs._hit_point;
        _energy_point = rhs._energy_point;
        _attack_damage = rhs._attack_damage;
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(std::string const &target)
// will call the most derived function instead of the function on base class. 
{
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap has enterred in Gate keeper mode" << std::endl;
}