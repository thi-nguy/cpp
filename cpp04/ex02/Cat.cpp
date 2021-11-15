#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat no-argument constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat Deconstructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &other_object): Animal(other_object)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    _brain = new Brain(*(other_object._brain)); 
    *this = other_object;
}

Cat  &Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        *_brain = *(rhs._brain); 
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "...meow...meow..." << std::endl;
}