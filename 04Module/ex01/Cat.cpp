#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain()) {
    std::cout << "The constructor created a Cat" << std::endl;
    _type = "Cat";
}

Cat::Cat(Cat const &object) : Animal(object) {
    this->_brain = new Brain(*object._brain);
    std::cout << "The copy constructor has created a Cat" << std::endl;
}

Cat::~Cat(void) {
    std::cout << "The destructor destroyed a Cat" << std::endl;
    delete  _brain;
}

Cat  &Cat::operator=(Cat const &object) {
    this->_type = object._type;
    return (*this);
}

std::string    Cat::getType(void) const {
    return (_type);
}

Brain   *Cat::getBrain(void) const {
    return (_brain);
}

void    Cat::makeSound(void) const {
    std::cout << "MIAOU!!!" << std::endl;
}
