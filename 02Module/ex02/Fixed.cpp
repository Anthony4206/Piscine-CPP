#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _raw_bits(0) {
    return ;
}

Fixed::Fixed(int const i) : _raw_bits(i << this->s_bits) {
    return ;
}

Fixed::Fixed(float const f) : _raw_bits((int)roundf(f * (1 << this->s_bits))) {
    return ;
}

Fixed::Fixed(Fixed const &object) {
    *this = object;
}

Fixed::~Fixed(void) {
    return ;
}

Fixed   &Fixed::operator=(Fixed const &object) {
    this->_raw_bits = object._raw_bits;
    return (*this);
}

bool    Fixed::operator>(Fixed const &object) const {
    return (this->_raw_bits > object._raw_bits);
}

bool    Fixed::operator<(Fixed const &object) const {
    return (this->_raw_bits < object._raw_bits);
}

bool    Fixed::operator>=(Fixed const &object) const {
    return (this->_raw_bits >= object._raw_bits);
}

bool    Fixed::operator<=(Fixed const &object) const {
    return (this->_raw_bits <= object._raw_bits);
}

bool    Fixed::operator==(Fixed const &object) const {
    return (this->_raw_bits == object._raw_bits); 
}

bool    Fixed::operator!=(Fixed const &object) const {
    return (this->_raw_bits != object._raw_bits);
}

Fixed   Fixed::operator+(Fixed const &object) {
    return (Fixed(this->toFloat() + object.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &object) {
    return (Fixed(this->toFloat() - object.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &object) {
    return (Fixed((float)this->_raw_bits / (1 << s_bits) * (float)object._raw_bits / (1 << s_bits)));
}

Fixed   Fixed::operator/(Fixed const &object) {
    return (Fixed((float)this->_raw_bits * (1 << s_bits) / (float)object._raw_bits * (1 << s_bits)));
}

Fixed   &Fixed::operator++(void) {
    this->_raw_bits++;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed   ret(*this);
    operator++();
    return (ret);
}

Fixed   &Fixed::operator--(void) {
    this->_raw_bits--;
    return (*this);
}

Fixed   Fixed::operator--(int) {
    Fixed   ret(*this);
    operator--();
    return (ret);
}

float    Fixed::toFloat(void) const {
    return ((float)this->_raw_bits / (1 << this->s_bits));
}

int Fixed::toInt(void) const {
    return (this->_raw_bits / (1 << s_bits));    
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
    if (first < second)
        return (first);
    return (second);
}

Fixed const &Fixed::min(Fixed const &first, Fixed const &second) {
    if (first < second)
        return (first);
    return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
    if (first > second)
        return (first);
    return (second);
}

Fixed const &Fixed::max(Fixed const &first, Fixed const &second) {
    if (first > second)
        return (first);
    return (second);
}

std::ostream   &operator<<(std::ostream &out, Fixed const &object) {
    out << object.toFloat();
    return (out);
}
