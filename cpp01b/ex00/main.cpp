#include "Zombie.hpp"

int     main(void)
{
    Zombie *first_one;

    first_one = newZombie("Songoku");
    first_one->announce();
    randomChump("Cadic");
    delete first_one;
    first_one = NULL;
    return (0);
}
