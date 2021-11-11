#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *zombie_array;
    int i;
    char c;
    std::string new_name;

    zombie_array = new Zombie[N];
    for (i = 0; i < N; i++)
    {
        new_name = name;
        c = i + '0';
        new_name = new_name + '_' + c;
        (zombie_array[i]).setName(new_name);
    }
    return (zombie_array);
}
