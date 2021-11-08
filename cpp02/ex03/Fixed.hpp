#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
        int     _value;
        static const int  _fracBits = 8;

    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed &other_object);  
        Fixed   &operator=(const Fixed &rhs);
        bool    operator>(const Fixed &rhs) const;
        bool    operator<(const Fixed &rhs) const;
        bool    operator>=(const Fixed &rhs) const;
        bool    operator<=(const Fixed &rhs) const;
        bool    operator==(const Fixed &rhs) const;
        bool    operator!=(const Fixed &rhs) const;
        Fixed   operator+(const Fixed &rhs) const;
        Fixed   operator-(const Fixed &rhs) const;
        Fixed   operator*(const Fixed &rhs) const;
        Fixed   operator/(const Fixed &rhs) const;
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);
        static  Fixed   const &min(Fixed const &a, Fixed const &b);
        static  Fixed   const &max(Fixed const &a, Fixed const &b);
        
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

#endif
