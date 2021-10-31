#include "Zombie.hpp"

Zombie*     newZombie(std::string name)
{
    Zombie *new_one;

    new_one = new Zombie();
    new_one->setName(name);
    return (new_one);
}
