#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int     _value;
        static const int  fractional_bit = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &other_object);  
        Fixed    &operator=(const Fixed &rhs);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif