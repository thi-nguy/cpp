#include "Fixed.hpp"

Fixed::Fixed(void): _value(0) {}

Fixed::Fixed(const int i): _value(i << _fracBits) {}

Fixed::Fixed(const float f): _value(std::roundf(f * (1 << _fracBits))) {}

Fixed::Fixed(const Fixed &other_object)
{
    *this = other_object;
}

Fixed::~Fixed(void) {}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    setRawBits(rhs.getRawBits());
    return (*this);
}

bool   Fixed::operator>(const Fixed &rhs) const
{
    return (_value > rhs.getRawBits());
}

bool    Fixed::operator<(const Fixed &rhs) const
{
    return (_value < rhs.getRawBits());
}

bool    Fixed::operator>=(const Fixed &rhs) const
{
    return (_value >= rhs.getRawBits());
}

bool    Fixed::operator<=(const Fixed &rhs) const
{
    return (_value <= rhs.getRawBits());
}

bool    Fixed::operator==(const Fixed &rhs) const
{
    return (_value == rhs.getRawBits());
}

bool    Fixed::operator!=(const Fixed &rhs) const
{
    return (_value != rhs.getRawBits());
}

Fixed   Fixed::operator+(const Fixed &rhs) const
{
    Fixed result;

    result.setRawBits(_value + rhs.getRawBits());
    return (result);
}

Fixed   Fixed::operator-(const Fixed &rhs) const
{
    Fixed result;

    result.setRawBits(_value - rhs.getRawBits());
    return (result);
}

Fixed   Fixed::operator*(const Fixed &rhs) const
{
    Fixed result;

    result.setRawBits((_value * rhs.getRawBits()) >> _fracBits);
    return (result);
}

Fixed   Fixed::operator/(const Fixed &rhs) const
{
    Fixed result;
    int denominator;

    denominator = rhs.getRawBits();
    if (denominator == 0)
    {
        std::cout << "Can not divide by 0. Stop the program." << std::endl;
        exit (1);
    }
    result.setRawBits((_value << _fracBits) / denominator);
    return (result);
}

Fixed   &Fixed::operator++(void) // ++a
{
    _value++;
    return (*this);
}

Fixed   Fixed::operator++(int) // a++
{
    Fixed result(*this);

    _value++;
    return (result);
}

Fixed   &Fixed::operator--(void)
{
    _value--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed result(*this);

    _value--;
    return (result);
}

int     Fixed::getRawBits(void) const
{
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}

float	Fixed::toFloat(void) const

{
	float	float_value = _value;

	float_value /= (1 << _fracBits);
    return(float_value);
}

int	Fixed::toInt(void) const
{
	return (_value >> _fracBits);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    return (b);
}


