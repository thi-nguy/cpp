#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") // ! what's this?
{
    _brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog(void)
{
    delete _brain;
    std::cout << "Dog Deconstructor called" << std::endl;
}

Dog::Dog(const Dog &other_object): Animal(other_object) // ! what's this?
{
    _brain = new Brain(*(other_object._brain));
    *this = other_object;
}

Dog  &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        _type = rhs._type;
        *_brain = *(rhs._brain);
    }
    std::cout << "Dog Assignation operator called" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "...woof...woof..." << std::endl;
}