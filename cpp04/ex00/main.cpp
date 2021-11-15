#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int     main(void)
{
    {
        const Animal    *meta = new Animal();
        const Animal    *dog = new Dog();
        const Animal    *cat = new Cat();

        std::cout << dog->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
        dog->makeSound();
        cat->makeSound();
        meta->makeSound();
        delete dog;
        delete cat;
        delete meta;
    }
    std::cout << std::endl;
    {
        const WrongAnimal   *wrong_meta = new WrongAnimal();
        const WrongAnimal   *wrong_cat = new WrongCat();

        std::cout << wrong_cat->getType() << " " << std::endl;
        wrong_cat->makeSound();
        wrong_meta->makeSound();
        delete wrong_cat;
        delete wrong_meta;
    }
}