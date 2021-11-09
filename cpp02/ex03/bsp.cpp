#include "Fixed.hpp"
#include "Point.hpp"
#include <cfloat>

#define SLOPE_INF FLT_MAX

float   get_slope(const Point &a, const Point &b)
{
    if (a.getX() - b.getX() == 0)
        return (SLOPE_INF);
    return ((a.getY() - b.getY()) / (a.getX() - b.getX()));
}

bool    is_on_same_side(const Point &a, const Point &b, const Point &p1, const Point &p2)
{
    float status_p1;
    float status_p2;
    float m = get_slope(a, b);

    if (m == SLOPE_INF)
    {
        if ((p1.getX() > a.getX()) && (p2.getX() > a.getX()))
            return (true);
        else if ((p1.getX() < a.getX()) && (p2.getX() < a.getX()))
            return (true);
        else
            return (false);
    }

    status_p1 = (p1.getY() - a.getY()) - m * (p1.getX() - a.getX());
    status_p2 = (p2.getY() - b.getY()) - m * (p2.getX() - b.getX());
    if (status_p1 * status_p2 <= 0)
        return (false);
    return (true);
}

bool    bsp(const Point a, const Point b, const Point c, const Point point)
{
    bool r1, r2, r3;

    r1 = is_on_same_side(a, b, c, point);
    r2 = is_on_same_side(a, c, b, point);
    r3 = is_on_same_side(b, c, a, point);
    return (r1 && r2 && r3);
}