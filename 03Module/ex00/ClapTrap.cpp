#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"),
    _hitPoints(10), _energyPoints(10), _attackDamage(0), _repairPoints(0) {
    std::cout << "The constructor created ClapTrap default" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),
    _hitPoints(10), _energyPoints(10), _attackDamage(0), _repairPoints(0) {
    std::cout << "The constructor created ClapTrap object : " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &object) {
    *this = object;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "The destructor destroyed ClapTrap object" << std::endl;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &object) {
    this->_name = object._name;
    this->_hitPoints = object._hitPoints;
    this->_energyPoints = object._energyPoints;
    this->_attackDamage = object._attackDamage;
    return (*this);
}

std::string ClapTrap::getName() const {
    return (_name);
}

unsigned int    ClapTrap::getHitPoints() const {
    return (_hitPoints);
}

unsigned int    ClapTrap::getEnergyPoints() const {
    return (_energyPoints);
}

unsigned int    ClapTrap::getAttackDamage() const {
    return (_attackDamage);
}

unsigned int    ClapTrap::getRepairPoints() const {
    return (_repairPoints);
}


void    ClapTrap::attack(std::string const &target) {
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " is dead" << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << this->_name << " has no more energy points" << std::endl;
        return ;       
    }

    std::cout << "ClapTrap " << this->_name << " attacks "
        << target << ", causing " << this->_attackDamage
        << " point(s) of damage" << std::endl;

        this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " is allready dead" << std::endl;
        return ;
    }

    std::cout << "ClapTrap " << this->_name << " took "
        << amount << " point(s) of damage" << std::endl;

    if (this->_hitPoints - amount < 0) {
        this->_hitPoints = 0;
    } else {
        this->_hitPoints -= amount;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " is dead" << std::endl;
        return ;
    }
    if (this->_energyPoints <= 0) {
        std::cout << this->_name << " has no more energy points" << std::endl;
        return ;       
    }

    std::cout << "ClapTrap " << this->_name << " as been repaired by "
        << amount << " hit point(s)" << std::endl;

    this->_energyPoints--;
    if (this->_hitPoints + amount > 10) {
        this->_hitPoints = 10;
    } else {
        this->_hitPoints += amount;
    }
}
