#include "Zombie.hpp"

void    randomChump(std::string name)
{
    //Todo: create Zombie, name it, make it announces itself.
    Zombie random;

    random.setName(name);
    random.announce();
}
