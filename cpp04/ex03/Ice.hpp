#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice(void);
        Ice(std::string const &type);
        ~Ice(void);
        Ice &operator=(const Ice &rhs);
        Ice(const Ice &other_object);

        AMateria *clone(void) const;
        void use(ICharacter &target);
};

#endif