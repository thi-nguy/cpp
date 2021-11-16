#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure(void);
        ~Cure(void);
        Cure&   operator=(const Cure& rhs);
        Cure(const Cure&    other_object);

        Cure*   clone(void) const;
        void use(ICharacter&    target);
};

#endif