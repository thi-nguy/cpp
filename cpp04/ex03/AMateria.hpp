#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"
#include <string>

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(void);
        AMateria(std::string const &type);
        ~AMateria(void);
        AMateria &operator=(const AMateria &rhs);
        AMateria(const AMateria &other_object);

        std::string const   &getType(void) const; // ! return the materia type

        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target); // ! need in cpp
};

#endif