#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
    std::cout << "Dog no-argument Constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog Deconstructor called" << std::endl;
}

Dog::Dog(const Dog &other_object): Animal(other_object)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other_object;
}

Dog  &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "...woof...woof..." << std::endl;
}