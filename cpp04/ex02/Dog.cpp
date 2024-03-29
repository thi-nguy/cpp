#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog no-argument Constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog Deconstructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog &other_object): Animal(other_object)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    // ! other_object._brain contains the address of memory, so we need to dereference it as *(other_object._brain) to get the value contains in that address.
    _brain = new Brain(*(other_object._brain));
    *this = other_object;
}

Dog  &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        *_brain = *(rhs._brain); 
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "...woof...woof..." << std::endl;
}