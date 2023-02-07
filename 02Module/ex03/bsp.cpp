#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point) {
    float   alpha;
    float   beta;
    float   gamma;

    alpha = ((b.get_y() - c.get_y()) * (point.get_x() - c.get_x())
        + (c.get_x() - b.get_x()) * (point.get_y() - c.get_y()))
        / ((b.get_y() - c.get_y()) * (a.get_x() - c.get_x())
        + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y()));
    beta = ((c.get_y() - a.get_y()) * (point.get_x() - c.get_x())
        + (a.get_x() - c.get_x()) * (point.get_y() - c.get_y()))
        / ((b.get_y() - c.get_y()) * (a.get_x() - c.get_x())
        + (c.get_x() - b.get_x()) * (a.get_y() - c.get_y()));
    gamma = 1.0f - alpha - beta;
    return (alpha > 0 && beta > 0 && gamma > 0);
}
