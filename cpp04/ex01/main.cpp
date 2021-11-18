#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int     main(void)
{
    // ! Test 1 in subject
    {
        std::cout << "TEST 01 ----------------------------" << std::endl << std::endl;
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
    // ! Test 2 in subject
    std::cout << std::endl;
    {
        std::cout << "TEST 02 ----------------------------" << std::endl << std::endl;
        
        const Animal* j = new Dog();
        std::cout << std::endl;
        
        const Animal* i = new Cat();
        std::cout << std::endl;
        
        delete j;
        std::cout << std::endl;
        
        delete i;
    }
    // ! Test Copy constructor & Assignation operator of Dog class
    std::cout << std::endl;
    {
        Dog				dog_original;
        unsigned int	index = 0;
        dog_original.setBrainIdea(index, "croquette");

        Dog		dog_copy(dog_original);
        std::cout << std::endl;
        std::cout << "Before" << std::endl;
        std::cout << "dog_original	idea:: " << dog_original.getBrainIdea(index) << std::endl;
        std::cout << "dog_copy	idea: " << dog_copy.getBrainIdea(index) << std::endl;

        std::cout << "After" << std::endl;
        dog_copy.setBrainIdea(index, "napping");
        std::cout << "dog_original	idea: " << dog_original.getBrainIdea(index) << std::endl;
        std::cout << "dog_copy	idea: " << dog_copy.getBrainIdea(index) << std::endl;

        std::cout <<std::endl;
    }

    // ! Test Copy constructor & Assignation operator of Cat Class
    std::cout << std::endl;
    {
        std::cout << "TEST 04 ----------------------------" << std::endl << std::endl;
        
        Cat basic;
        std::cout << std::endl;
        
        Cat tmp(basic);
        Cat dup_tmp;
        std::cout << std::endl;
        
        dup_tmp = tmp;
        std::cout << std::endl;
        
        std::cout << basic.getType() << std::endl;
        std::cout << tmp.getType() << std::endl;
        std::cout << dup_tmp.getType() << std::endl << std::endl;
    }
}