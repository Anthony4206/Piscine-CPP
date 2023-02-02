#include "Weapon.hpp"

Weapon::Weapon(std::string item) : type(item) {
    return ;
}

Weapon::~Weapon(void) {
    return ;
}

std::string const  &Weapon::getType(void) const {
    return (this->type);
}

void  Weapon::setType(std::string new_type) {
    this->type = new_type;
}
