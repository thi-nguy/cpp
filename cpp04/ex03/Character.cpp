#include "Character.hpp"

Character::Character(void): _name("unknown") {}

Character::Character(std::string const &name): _name(name) {}

Character::~Character(void) {}

Character    &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
    }
    return (*this);
}

Character::Character(const Character &other_object)
{
    *this = other_object;
}