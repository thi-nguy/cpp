#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is destroyed" << std::endl;
}

std::string       Zombie::getName(void)
{
    return (this->_name);
}

void        Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
