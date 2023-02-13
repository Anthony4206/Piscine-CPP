#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), ScavTrap(), FragTrap() {
    this->_name = "default";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_repairPoints = 20;
    std::cout << "The constructor created DiamondTrap default" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    this->_repairPoints = 20;
    std::cout << "The constructor created DiamondTrap object:" << name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &object) {
    *this = object;
    std::cout << "The DiamondTrap copy constructor has been called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << "The destructor destroyed DiamondTrap object: "
        << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &object) {
    ClapTrap::operator=(object);
    return (*this);
}

void        DiamondTrap::attack(std::string const &target) {
    this->ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << _name << ". My sub-object name is "
        << ClapTrap::_name << std::endl;
}
