#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal Deconstructor called" << std::endl;
}

Animal::Animal(const Animal &other_object)
{
    *this = other_object;
}

Animal  &Animal::operator=(const Animal &rhs)
{
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    std::cout << "Animal Assignation operator called" << std::endl;
    return (*this);
}

std::string     Animal::getType(void) const
{
    return (_type);
}