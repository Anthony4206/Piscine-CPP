#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "The constructor created an AMateria" << std::endl;
}

AMateria::AMateria(AMateria const &object) {
    std::cout << "The copy constructor has created an AMateria" << std::endl;
    *this = object;
}

AMateria::~AMateria(void) {
    std::cout << "The destructor destroyed an AMateria" << std::endl;
}

AMateria    &AMateria::operator=(AMateria const &object) {
    this->_type = object._type;
    return (*this);
}

std::string const   &AMateria::getType() const {
    return (_type);
}

void    AMateria::use(ICharacter &target) {
    (void)target;
}
