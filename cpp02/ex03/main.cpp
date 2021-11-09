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

//  Inside case
    Point point3(2, 2);
    std::cout << bsp(a, b, c, point3) << std::endl;
    
//  Point is vertex
    Point point2(a);
    std::cout << bsp(a, b, c, point2) << std::endl;

//  Point on edge
    Point a1(1, 3);
    Point b1(3, 1);
    Point c1(1, 1);
    Point point1(2, 2);
    std::cout << bsp(a1, b1, c1, point1) << std::endl;


//  Special case 1: paralell with Ox
    Point a2(3, 1);
    Point b2(2, 2);
    Point c2(1, 1);
    Point point4(1.5, 2);
    std::cout << bsp(a2, b2, c2, point4) << std::endl;

//  Special case 2: paralell with Oy
    Point a3(3, 1);
    Point b3(2, 2);
    Point c3(3, 5);
    std::cout << bsp(a3, b3, c3, point4) << std::endl;

//  Special case 3: Not a triangle
    Point a4(1, 1);
    Point b4(2, 2);
    Point c4(3, 3);
    std::cout << bsp(a4, b4, c4, point4) << std::endl;

    return (0);
}


