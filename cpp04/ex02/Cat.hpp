#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain  *_brain;

    public:
        Cat(void);
        virtual ~Cat(void); // ! on a besoin de virtual ici? pourquoi?
        Cat(const Cat &other_object);
        Cat   &operator=(const Cat &rhs);

        void    makeSound(void) const; // ! tai sao them virtual?
};

#endif