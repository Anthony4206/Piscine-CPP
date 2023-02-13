#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    this->_repairPoints = 10;
    std::cout << "The constructor created FragTrap default" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    this->_repairPoints = 10;
    std::cout << "The constructor created FragTrap object:" << name << std::endl;
}

FragTrap::FragTrap(FragTrap const &object) : ClapTrap(object) {
    *this = object;
    std::cout << "The FragTrap copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "The destructor destroyed FragTrap object: "
        << _name << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const &object) {
    ClapTrap::operator=(object);
    return (*this);
}

void    FragTrap::attack(std::string const &target) {
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " is dead" << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << this->_name << " has no more energy points" << std::endl;
        return ;
    }

    std::cout << "FragTrap " << this->_name << " attacks "
        << target << ", causing " << this->_attackDamage
        << " point(s) of damage" << std::endl;

        this->_energyPoints--;
}

void    FragTrap::highFivesGuys(void) {
        std::cout << _name << " says: high five, guys!" << std::endl;
}
