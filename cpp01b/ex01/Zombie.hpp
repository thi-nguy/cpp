#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream> //library
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(void);
        ~Zombie(void);
        void            setName(std::string name);
        std::string     getName(void);
        void            announce(void);
};

Zombie  *zombieHorde(int N, std::string name);

#endif
