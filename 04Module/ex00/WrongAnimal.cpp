#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("") {
    std::cout << "The constructor created an WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &object) {
    std::cout << "The copy constructor has created an WrongAnimal" << std::endl;
    *this = object;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "The destructor destroyed an WrongAnimal" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &object) {
    this->_type = object._type;
    return (*this);
}

std::string    WrongAnimal::getType(void) const {
    return (_type);
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "..." << std::endl;
}
