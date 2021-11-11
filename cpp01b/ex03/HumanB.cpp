#include "HumanB.hpp"
#include <iostream>
#include <string>


void    HumanB::attack() {
    if (_weapon->getType().empty()) {
        std::cout << _name << " has no weapon" << std::endl;
    } else {
        std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
    }
}

void    HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}

HumanB::HumanB(std::string name): _name(name) {
    return  ;
}

HumanB::~HumanB() {
    return ;
}