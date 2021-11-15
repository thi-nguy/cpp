#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal(void);
        Animal(std::string type);
        Animal  &operator=(const Animal &rhs); // ! use when object is alread created
        Animal(const Animal &other_object); // ! use when need to create new object
        virtual ~Animal(void); // ! to override it in child class

        virtual void    makeSound(void) const;  // ! to override it in child class
        std::string     getType(void) const;
};

#endif