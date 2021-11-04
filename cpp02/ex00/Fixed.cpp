#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &dummy)
{
    std::cout << "Copy constructor called" << std::endl;
    _value = dummy._value;
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    setRawBits(rhs.getRawBits());
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits function member called" << std::endl;
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}



