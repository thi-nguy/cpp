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
    // ! Test Copy constructor & Assignation operator
    std::cout << std::endl;
    {
        std::cout << "TEST 03 ----------------------------" << std::endl << std::endl;
        
        Dog basic;
        std::cout << std::endl;
        
        Dog tmp(basic);
        std::cout << std::endl;
        
        Dog dup_tmp;
        std::cout << std::endl;
        
        dup_tmp = tmp;
        std::cout << std::endl;
        
        std::cout << basic.getType() << std::endl;
        std::cout << tmp.getType() << std::endl;
        std::cout << dup_tmp.getType() << std::endl << std::endl;
    }
}