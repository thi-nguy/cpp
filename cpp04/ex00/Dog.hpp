#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog(void);
        ~Dog(void);
        Dog(const Dog &other_object);
        Dog   &operator=(const Dog &rhs);

        void    makeSound(void) const;
};

#endif