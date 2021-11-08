#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other_object)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other_object;
}

Fixed::Fixed(const int i): _value(i << _fracBits) //convert int to fixed point
// _value = i *2^_fracBits : 
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _value(std::roundf(f * (1 << _fracBits))) // convert float to fixed point
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    setRawBits(rhs.getRawBits());
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}

float	Fixed::toFloat(void) const // convert fixed point to float

{
	float	float_value = _value;

	float_value /= (1 << _fracBits);
    return(float_value);
}

int	Fixed::toInt(void) const
{
	return (_value >> _fracBits); // convert fixed point to Int by scale factor. _value = _value * 1/2^_fracBits
}