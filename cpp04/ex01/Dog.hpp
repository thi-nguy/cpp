#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog(void);
        virtual ~Dog(void);
        Dog(const Dog &other_object);
        Dog   &operator=(const Dog &rhs);

        void    makeSound(void) const;

        std::string	getBrainIdea(unsigned int i) const;
		void				setBrainIdea(unsigned int i, std::string idea);
};

#endif