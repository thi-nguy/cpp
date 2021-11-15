#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int     main(void)
{
    std::cout << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }
    // std::cout << std::endl;
    // {
    //     Animal animal;
    //     std::cout << std::endl;
    // }
}