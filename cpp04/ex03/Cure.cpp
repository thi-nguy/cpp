#include "Cure.hpp"

Cure::Cure(void) {}

Cure::Cure(std::string const &type): _type(type) {}

Cure::~Cure(void) {}

Cure    &Cure::operator=(const Cure &rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return (*this);
}

Cure::Cure(const Cure &other_object)
{
    *this = other_object;
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}