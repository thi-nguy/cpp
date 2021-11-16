#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::~Cure(void) {}

Cure&   Cure::operator=(const Cure&    rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return (*this);
}

Cure::Cure(const Cure&  other_object): AMateria(other_object._type)
{
    *this = other_object;
}

Cure*   Cure::clone(void) const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter&   target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}