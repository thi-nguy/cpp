#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") // ! what's this?
{
    std::cout << "Cat Default constructor called" << std::endl;
    _brain = new Brain();
}

Cat::~Cat(void)
{
    delete _brain;
    std::cout << "Cat Deconstructor called" << std::endl;
}

Cat::Cat(const Cat &other_object): Animal(other_object) // ! what's this?
{
    _brain = new Brain(*(other_object._brain)); // ! ???
    *this = other_object;
}

Cat  &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        _type = rhs._type;
        *_brain = *(rhs._brain); // ! ??
    }
    std::cout << "Cat Assignation operator called" << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "...meow...meow..." << std::endl;
}