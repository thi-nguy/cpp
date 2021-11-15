#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat no-argument constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Deconstructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other_object): WrongAnimal(other_object)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = other_object;
}

WrongCat  &WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "...meow...meow..." << std::endl;
}