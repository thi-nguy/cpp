#include "Zombie.hpp"

int     main(void)
{
    Zombie *zombie_horde;
    int i;

    zombie_horde = zombieHorde(5, "Boute");
    for (i = 0; i < 5; i++)
        zombie_horde[i].announce();
    delete []zombie_horde;
    zombie_horde = NULL;
    return (0);
}
