#include "Point.hpp"

Point::Point(void) : x(0), y(0) {
    return ;
}

Point::Point(float const f_x, float const f_y) : x(f_x), y(f_y) {
    return ;
}

Point::Point(Point const &object) : x(object.x), y(object.y) {
    return ;
}

Point::~Point(void) {
    return ;
}

Point   &Point::operator=(Point const &object) {
    if (this !=  &object) {
        (Fixed)this->x = object.get_object_x();
        (Fixed)this->y = object.get_object_y();
    }
    return (*this);
}

float   Point::get_x(void) const {
    return (this->x.toFloat());
}

float   Point::get_y(void) const {
    return (this->y.toFloat());
}

Fixed Point::get_object_x( void ) const {
    return this->x;
}

Fixed Point::get_object_y( void ) const {
    return this->y;
}
