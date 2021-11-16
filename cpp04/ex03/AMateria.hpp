#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <string>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria(void);
        AMateria(std::string const &type);
        virtual ~AMateria(void);
        AMateria &operator=(const AMateria &rhs);
        AMateria(const AMateria &other_object);

        std::string const   &getType(void) const; // ! return the materia type

        virtual AMateria *clone(void) const = 0;
        virtual void use(ICharacter &target);
};

#endif