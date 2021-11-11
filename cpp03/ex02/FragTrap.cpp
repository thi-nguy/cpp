#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    _name = name;
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other_object): ClapTrap(other_object)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = other_object;
}

FragTrap    &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hit_point = rhs._hit_point;
        _energy_point = rhs._energy_point;
        _attack_damage = rhs._attack_damage;
    }
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap highfives everyone" << std::endl;
}
