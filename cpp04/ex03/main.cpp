#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int     main(void)
{
    std::cout << std::endl << "TEST 01 -------------------" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    std::cout << std::endl << "TEST 02 -------------------" << std::endl;
    // ! Test for copy and assignation function of AMateria
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        AMateria* basic;
        basic = src->createMateria("abc");
        basic = src->createMateria("ice");
        if (basic != NULL) // ! need to manually delete memory here
            delete basic;
        basic = src->createMateria("cure");
        
        AMateria*   tmp(basic);
        tmp = src->createMateria("cure");
        ICharacter* me = new Character("me");
        ICharacter* bob = new Character("bob");
        me->equip(tmp);
        me->equip(basic);
        me->use(0, *bob);

        delete me;
        delete bob;
        delete src;
    }
     // ! Test for copy and assignation function of Character
    std::cout << std::endl << "TEST 03 -------------------" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
        AMateria* basic;
        basic = src->createMateria("abc");
        basic = src->createMateria("ice");
        AMateria*   tmp(basic);
        tmp = src->createMateria("cure");
        Character me("me");
        me.equip(tmp);
        me.equip(basic);
        Character bob(me);
        bob.use(0, me);

        delete src;
    }
    return (0);
}

// ! Sometime we need to check for NULL pointer (possible Segv) and delete Heap memory manually (i.e. outside the class and its functions).