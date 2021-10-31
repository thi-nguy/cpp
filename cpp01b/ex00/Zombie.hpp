#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
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

// todo: create a new zombie, name it, return it to used eslwhere.
Zombie  *newZombie(std::string name);

// todo: create zombie, make it enounce itself
void    randomChump(std::string name);

#endif
