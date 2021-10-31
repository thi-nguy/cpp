#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = "";
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is destroyed" << std::endl;
    // TODO: delete memory allocated on Heap;
}

void            Zombie::setName(std::string name)
{
    this->_name = name;
}

std::string       Zombie::getName(void)
{
    return (this->_name);
}

void        Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
