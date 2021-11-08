#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point(void);
        Point(const Point &other_object);
        Point(const float x, const float y);
        Point   &operator=(const Point &rhs);
        ~Point();

        Fixed	getX(void) const;
        Fixed	getY(void) const;
};

#endif 