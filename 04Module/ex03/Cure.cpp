#include <iostream>
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
    std::cout << "The constructor created a Cure" << std::endl;
}

Cure::Cure(Cure const &object) : AMateria(object) {
    std::cout << "The copy constructor has created a Cure" << std::endl;
}

Cure::~Cure(void) {
    std::cout << "The destructor destroyed a Cure" << std::endl;
}

Cure    &Cure::operator=(Cure const &object) {
    this->_type = object._type;
    return (*this);
}

AMateria    *Cure::clone() const {
    return (new Cure(*this));
}

void    Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
