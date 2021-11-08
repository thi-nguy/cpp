#include "Fixed.hpp"

std::ostream    &operator<<(std::ostream &COUT, const Fixed &fixed_point)
{
    COUT << fixed_point.toFloat();
    return (COUT);
}

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << "a is " << a << std::endl;
    std::cout << "++a is" << ++a << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "a++ is" << a++ << std::endl;
    std::cout << "a is " << a << std::endl;

    std::cout << "b is " << b << std::endl;

    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    return (0);
}