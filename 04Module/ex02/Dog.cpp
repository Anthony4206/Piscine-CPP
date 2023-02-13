#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain()) {
    std::cout << "The constructor created a Dog" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const &object) : Animal(object) {
    this->_brain = new Brain(*object._brain);
    std::cout << "The copy constructor has created a Dog" << std::endl;
}

Dog::~Dog(void) {
    std::cout << "The destructor destroyed a Dog" << std::endl;
    delete  _brain;
}

Dog  &Dog::operator=(Dog const &object) {
    this->_type = object._type;
    return (*this);
}

std::string    Dog::getType(void) const {
    return (_type);
}

Brain   *Dog::getBrain(void) const {
    return (_brain);
}

void    Dog::makeSound(void) const {
    std::cout << "WOUAF!!!" << std::endl;
}
