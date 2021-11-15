#include "Animal.hpp"

Animal::Animal(void): _type("no type") // ! to avoid garbage value
{
    std::cout << "Animal no-argument constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal argument Constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal Deconstructor called" << std::endl;
}

Animal::Animal(const Animal &other_object)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = other_object;
}

Animal  &Animal::operator=(const Animal &rhs)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

void    Animal::makeSound(void) const
{
    std::cout << "...Random...animal...sound..." << std::endl;
}

std::string     Animal::getType(void) const
{
    return (_type);
}