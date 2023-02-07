#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _raw_bits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &object) {
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &object) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_raw_bits = object.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_raw_bits);
}

void    Fixed::setRawBits(int const raw) {
    this->_raw_bits = raw;
}
