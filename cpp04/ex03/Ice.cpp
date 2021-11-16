#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::~Ice(void) {}

Ice    &Ice::operator=(const Ice &rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return (*this);
}

Ice::Ice(const Ice &other_object): AMateria(other_object)
{
    *this = other_object;
}

AMateria*   Ice::clone(void) const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots and ice bold at " << target.getName() << " *" << std::endl; 
}