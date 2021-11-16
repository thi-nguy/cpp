#include "AMateria.hpp"

AMateria::AMateria(void): _type("no type") {}

AMateria::AMateria(std::string const &type): _type(type) {}

AMateria::~AMateria(void) {}

AMateria    &AMateria::operator=(const AMateria &rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return (*this);
}

AMateria::AMateria(const AMateria &other_object)
{
    *this = other_object;
}

std::string const   &AMateria::getType(void) const
{
    return (_type);
}

void                AMateria::use(ICharacter &target)
{
    std::cout << "* use some random materia on " << target.getName() << "*" << std::endl;
}