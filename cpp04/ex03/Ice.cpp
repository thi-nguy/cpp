#include "Ice.hpp"

Ice::Ice(void) {}

Ice::Ice(std::string const &type): _type(type) {}

Ice::~Ice(void) {}

Ice    &Ice::operator=(const Ice &rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return (*this);
}

Ice::Ice(const Ice &other_object)
{
    *this = other_object;
}

void    Ice::use(ICharacter &target)
{
    std::cout << "* shoots and ice bold at " << target.getName() << " *" << std::endl; 
}