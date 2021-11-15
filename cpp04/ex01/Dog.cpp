#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"), _brain(new Brain()) // ! what's this?
{
    std::cout << "Dog no-argument Constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog Deconstructor called" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog &other_object): Animal(other_object)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    // _brain = new Brain(*(other_object._brain));
    *this = other_object;
}

Dog  &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        // this->_type = rhs._type; // ? already called it from Animal(other_object) ?
        _brain = new Brain(*(rhs._brain)); 
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "...woof...woof..." << std::endl;
}