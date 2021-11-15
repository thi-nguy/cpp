#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("no name")
{
    std::cout << "WrongAnimal no-argument constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "WrongAnimal argument Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other_object)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = other_object;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "...Random...animal...sound..." << std::endl;
}

std::string     WrongAnimal::getType(void) const
{
    return (_type);
}