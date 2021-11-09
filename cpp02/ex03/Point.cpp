#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{}

Point::Point(const Point &other_object)
: _x(other_object._x), _y(other_object._y)
{}

Point::Point(const float x, const float y): _x(x), _y(y)
{}

Point   &Point::operator=(const Point &rhs)
{
    return ((Point &)rhs);
}

Point::~Point(void)
{}


float   Point::getX(void) const
{
    return (_x.toFloat());
}

float	Point::getY(void) const
{
    return (_y.toFloat());
}