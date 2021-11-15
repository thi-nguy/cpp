#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int     main(void)
{
    {
        Animal* animals[4];

		for (int i = 0; i < 2; i++)
		{
			animals[i] = new Cat();
            std::cout << std::endl;
		}
		for (int i = 2; i < 4; i++)
		{
			animals[i] = new Dog();
            std::cout << std::endl;
		}
		for (int i = 0; i < 4; i++)
		{
			delete animals[i];
            std::cout << std::endl;
		}
    }
    std::cout << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }
    std::cout << std::endl;
    {
        Dog basic;
        std::cout << std::endl;
        Dog tmp = basic;
        std::cout << basic.getType() << std::endl;
        std::cout << tmp.getType() << std::endl;

        std::cout << std::endl;
    }
}