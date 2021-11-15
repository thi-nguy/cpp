#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal // ! becomes an abstract class: is the class that has at least one pure virtual function.
{
    protected:
        std::string _type;

    public:
        Animal(void);
        Animal(std::string type);
        Animal  &operator=(const Animal &rhs);
        Animal(const Animal &other_object);
        virtual ~Animal(void); // ! to override it in child class

        virtual void    makeSound(void) const = 0;  
        // ! pure virtual function. 
        /* You don't have your implementation of your own. You make sure that  each of your derived class has its own implementation.
        */
        std::string     getType(void) const;
};

#endif