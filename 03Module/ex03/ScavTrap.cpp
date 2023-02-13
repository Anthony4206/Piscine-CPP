#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_repairPoints = 5;
    std::cout << "The constructor created ScavTrap default" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_repairPoints = 5;
    std::cout << "The constructor created ScavTrap object:" << name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &object) : ClapTrap(object) {
    *this = object;
    std::cout << "The ScavTrap copy constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "The destructor destroyed ScavTrap object: "
        << _name << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &object) {
    ClapTrap::operator=(object);
    return (*this);
}

void    ScavTrap::attack(std::string const &target) {
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " is dead" << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << this->_name << " has no more energy points" << std::endl;
        return ;
    }

    std::cout << "ScavTrap " << this->_name << " attacks "
        << target << ", causing " << this->_attackDamage
        << " point(s) of damage" << std::endl;

        this->_energyPoints--;
}

void    ScavTrap::guardGate(void) {
    std::cout << "The ScavTrap came into gatekeeper mode" << std::endl;
}
