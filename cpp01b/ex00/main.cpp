#include "Zombie.hpp"

int     main(void)
{
    Zombie *first_one;
    Zombie *second_one;

    first_one = newZombie("Songoku");
    first_one->announce();
    delete first_one;
    first_one = NULL;

    second_one = newZombie("");
    second_one->announce();
    delete second_one;
    second_one = NULL;


    randomChump("Cadic");
    randomChump("");

    return (0);
}
