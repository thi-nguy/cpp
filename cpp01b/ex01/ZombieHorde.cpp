#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *ptr_zombie;
    int i;

    ptr_zombie = new Zombie[N];
    for (i = 0; i < N; i++)
        ptr_zombie[i].setName(name);
    return (ptr_zombie);
}
