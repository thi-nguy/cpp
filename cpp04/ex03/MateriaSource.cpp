#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void): _type("no type") {}

MateriaSource::MateriaSource(std::string const &type): _type(type) {}

MateriaSource::~MateriaSource(void) {}

MateriaSource    &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this != &rhs)
    {
        _type = rhs.getType();
    }
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &other_object)
{
    *this = other_object;
}