#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure
{
    public:
        Cure(void);
        Cure(std::string const &type);
        ~Cure(void);
        Cure &operator=(const Cure &rhs);
        Cure(const Cure &other_object);

        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif