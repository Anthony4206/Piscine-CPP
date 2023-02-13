#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal() {
    _type = "Cat";
    std::cout << "The constructor created a Cat" << std::endl;
}

Cat::Cat(Cat const &object) : Animal(object) {
    *this = object;
    std::cout << "The copy constructor has created a Cat" << std::endl;
}

Cat::~Cat(void) {
    std::cout << "The destructor destroyed a Cat" << std::endl;
}

Cat  &Cat::operator=(Cat const &object) {
    this->_type = object._type;
    return (*this);
}

std::string    Cat::getType(void) const {
    return (_type);
}

void    Cat::makeSound(void) const {
    std::cout << "MIAOU!!!" << std::endl;
}
