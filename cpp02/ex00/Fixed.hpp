#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int     _fixed_point_value;
        static const int  fractional_bit;

    public:
        Fixed();
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
