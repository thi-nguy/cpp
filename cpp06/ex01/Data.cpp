#include "Data.hpp"

Data::Data(void): _age(0), _name("no name") {}

Data::Data(int value, std::string name): 
_age(value), _name(name) 
{}

Data::~Data(void) {}

Data::Data(const Data &other)
:_age(other._age), _name(other._name)
{
    *this = other;
}

Data&     Data::operator=(const Data &rhs)
{
    if (this != &rhs)
    {
        _age = rhs._age;
        _name = rhs._name;
    }
    return (*this);
}

int     Data::getAge(void) const
{
    return (_age);
}

std::string Data::getName(void) const
{
    return (_name);
}