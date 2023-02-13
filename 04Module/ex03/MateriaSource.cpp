#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
    std::cout << "The constructor created a MateriaSource" << std::endl;
    for (int i(0); i < 4; i++) {
        _materia[i] = nullptr;
    }
}

MateriaSource::MateriaSource(MateriaSource const &object) {
    std::cout << "The copy constructor has created a MateriaSource" << std::endl;
    for (int i(0); i < 4; i++) {
        if (object._materia[i]) {
            this->_materia[i] = object._materia[i]->clone();
        } else {
            this->_materia[i] = nullptr;           
        }
    }
}

MateriaSource::~MateriaSource(void) {
    std::cout << "The destructor destroyed a MateriaSource" << std::endl;
    for (int i(0); i < 4; i++) {
        if (_materia[i]) {
            delete _materia[i];
        }
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &object) {
    if (this != &object) {
        this->~MateriaSource();
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

void    MateriaSource::learnMateria(AMateria *object) {
    for (int i(0); i < 4; i++) {
        if (!this->_materia[i]) {
            this->_materia[i] = object;
            return;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type) {
    for (int i(0); i < 4; i++) {
        if (_materia[i] && _materia[i]->getType() == type)
            return (_materia[i]->clone());
    }
    return (0);
}
