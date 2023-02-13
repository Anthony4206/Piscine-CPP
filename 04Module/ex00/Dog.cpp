#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal() {
    _type = "Dog";
    std::cout << "The constructor created a Dog" << std::endl;
}

Dog::Dog(Dog const &object) : Animal(object) {
    *this = object;
    std::cout << "The copy constructor has created a Dog" << std::endl;
}

Dog::~Dog(void) {
    std::cout << "The destructor destroyed a Dog" << std::endl;
}

Dog  &Dog::operator=(Dog const &object) {
    this->_type = object._type;
    return (*this);
}

std::string    Dog::getType(void) const {
    return (_type);
}

void    Dog::makeSound(void) const {
    std::cout << "WOUAF!!!" << std::endl;
}
