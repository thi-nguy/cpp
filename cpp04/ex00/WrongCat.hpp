#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat(void);
        ~WrongCat(void);
        WrongCat(const WrongCat &other_object);
        WrongCat   &operator=(const WrongCat &rhs);

        void    makeSound(void) const; // ! tai sao them virtual?
};


#endif