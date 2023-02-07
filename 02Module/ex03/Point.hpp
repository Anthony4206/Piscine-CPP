#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point(void);
    Point(float const f_x, float const f_y);
    Point(Point const &object);
    ~Point(void);
    Point   &operator=(Point const &object);

    float   get_x(void) const;
    float   get_y(void) const;
    Fixed   get_object_x(void) const;
    Fixed   get_object_y(void) const;
};

#endif
