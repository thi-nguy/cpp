#include "Fixed.hpp"
#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream    &operator<<(std::ostream &COUT, const Fixed &fixed_point)
{
    COUT << fixed_point.toFloat();
    return (COUT);
}

int main(void)
{
// Out side case
    Point a(1.4, 3.83957);
    Point b(3.92874, 1.3544);
    Point c(1, 1);
    Point point(2.5, 3);
    std::cout << bsp(a, b, c, point) << std::endl;

//  Point is vertex
    Point point2(a);
    std::cout << bsp(a, b, c, point2) << std::endl;

//  Point on edge
    Point a1(1, 3);
    Point b1(3, 1);
    Point c1(1, 1);
    Point point1(2, 2);
    std::cout << bsp(a1, b1, c1, point1) << std::endl;

//  Inside case
    Point point3(2, 2);
    std::cout << bsp(a, b, c, point3) << std::endl;

    return (0);
}


