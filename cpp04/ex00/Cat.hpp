#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat(void);
        ~Cat(void);
        Cat(const Cat&  other_object);
        Cat&    operator=(const Cat&    rhs);

        void    makeSound(void) const;
};

#endif