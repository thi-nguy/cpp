#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal  &operator=(const WrongAnimal &rhs);
        WrongAnimal(const WrongAnimal &other_object);
        virtual ~WrongAnimal(void);

        void    makeSound(void) const;
        std::string     getType(void) const;
};


#endif