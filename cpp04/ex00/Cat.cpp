#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")  // ! run this specific constructor. It is not really useful in this case because _type is protected. But if _type is private, this is the way that Cat class can access _type.
{
    std::cout << "Cat no-argument constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat Deconstructor called" << std::endl;
}

Cat::Cat(const Cat &other_object): Animal(other_object)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other_object;
}

Cat&    Cat::operator=(const Cat& rhs)
{
    if (this != &rhs) // &rhs: address of rhs
    {
        _type = rhs._type;
    }
    std::cout << "Cat Assignation operator called" << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "...meow...meow..." << std::endl;
}

/*
    - Constructor is not inherited in C++. You can't call the constructor of a superclass when you construct a subclass. But C++ will alway run one of the constructors of the superclass when instantiate a subclass.
    - Each step in the hierarchy, you are allowed to specify which constructor will be called in superclass. 
*/