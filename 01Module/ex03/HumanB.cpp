#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name) {
    return ;
}

HumanB::~HumanB(void) {
    return ;
}

void    HumanB::attack(void) const {
    if (this->_weapon)
        std::cout << this->_name << " attacks with their "
            << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon" << std::endl;
}

void    HumanB::setWeapon(Weapon &item) {
    this->_weapon = &item;
}
