#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
    _type = "WrongCat";
    std::cout << "The constructor created a WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat const &object) : WrongAnimal(object) {
    *this = object;
    std::cout << "The copy constructor has created a WrongCat" << std::endl;
}

WrongCat::~WrongCat(void) {
    std::cout << "The destructor destroyed a WrongCat" << std::endl;
}

WrongCat  &WrongCat::operator=(WrongCat const &object) {
    this->_type = object._type;
    return (*this);
}

std::string    WrongCat::getType(void) const {
    return (_type);
}

void    WrongCat::makeSound(void) const {
    std::cout << "MIAOU!!!" << std::endl;
}
