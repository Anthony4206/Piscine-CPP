#include <iostream>
#include "Character.hpp"

Character::Character(std::string const &name) : _name(name) {
    std::cout << "The constructor created a Character" << std::endl;
    for (int i(0); i < 4; i++) {
        _materia[i] = nullptr;
    }
}

Character::Character(Character const &object) {
    std::cout << "The copy constructor has created a Character" << std::endl;
    for (int i(0); i < 4; i++) {
        if (object._materia[i]) {
            this->_materia[i] = object._materia[i]->clone();
        } else {
            this->_materia[i] = nullptr;           
        }
    }
}

Character::~Character(void) {
    std::cout << "The destructor destroyed a Character" << std::endl;
    for (int i(0); i < 4; i++) {
        if (_materia[i]) {
            delete _materia[i];
        }
    }
}

Character    &Character::operator=(Character const &object) {
    if (this != &object) {
        this->~Character();
        for (int i(0); i < 4; i++) {
            if (object._materia[i]) {
                this->_materia[i] = object._materia[i]->clone();
            } else {
                this->_materia[i] = nullptr;           
            }
        }       
    }
    return (*this);
}

std::string const   &Character::getName() const {
    return (_name);
}

void    Character::equip(AMateria *m) {
    for (int i(0); i < 4; i++) {
        if (!_materia[i]) {
            _materia[i] = m;
            return;
        }
    }
}

void    Character::unequip(int idx) {
    if ((idx >= 0 && idx <= 3) && _materia[idx])
        _materia[idx] = nullptr;
}

void    Character::use(int idx, ICharacter &target) {
    if ((idx >= 0 && idx <= 3) && _materia[idx])
        _materia[idx]->use(target);
}
