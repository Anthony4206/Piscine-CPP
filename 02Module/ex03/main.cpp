#include <iostream>
#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
    Point   a(2.0f, 3.0f);
    Point   b(1.0f, 1.0f);
    Point   c(3.0f, 1.0f);
    Point   p1(2.0f, 2.0f);
    Point   p2(4.0f, 2.0f);
    Point   p3(2.0f, 0.2f);
    Point   p4(1.0f, 1.0f);

    std::cout << "The point p1 is " << (bsp(a, b, c, p1) ? "in " : "not in ")
        << "the triangle" << std::endl;
    std::cout << "The point p2 is " << (bsp(a, b, c, p2) ? "in " : "not in ")
        << "the triangle" << std::endl;
    std::cout << "The point p3 is " << (bsp(a, b, c, p3) ? "in " : "not in ")
        << "the triangle" << std::endl;
    std::cout << "The point p4 is " << (bsp(a, b, c, p4) ? "in " : "not in ")
        << "the triangle" << std::endl;
}
