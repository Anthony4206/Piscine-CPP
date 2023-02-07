#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _raw_bits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _raw_bits(i << this->s_bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _raw_bits(roundf(f * (1 << this->s_bits))) {
    std::cout << "Float constructor called" << std::endl;
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
    this->_raw_bits = object._raw_bits;
    return (*this);
}

std::ostream   &operator<<(std::ostream &out, Fixed const &object) {
    out << object.toFloat();
    return (out);
}

float    Fixed::toFloat(void) const {
    return ((float)this->_raw_bits / (1 << this->s_bits));
}

int Fixed::toInt(void) const {
    return (this->_raw_bits / (1 << s_bits));    
}
