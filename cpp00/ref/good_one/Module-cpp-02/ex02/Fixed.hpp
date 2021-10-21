/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/17 13:06:12 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// LIBS ========================================================================
# include <iostream>
# include <cmath>
// =============================================================================

// PROTOTYPES ==================================================================
class Fixed;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class Fixed
{
    private:
        int                 value;
        const static int    fractionnal_bits = 8;
    public:
        Fixed();                             // Default constructor
        Fixed(const Fixed& copy);                  // recopy constructor
        Fixed(const int integer);
        Fixed(const float floater);
        virtual ~Fixed();                            // Eventual virtual destructor
        Fixed &operator=(const Fixed& op);         // Affectation operation

        Fixed operator+(const Fixed& op) const;
        Fixed operator-(const Fixed& op) const;
        Fixed operator*(const Fixed& op) const;
        Fixed operator/(const Fixed& op) const;
        Fixed & operator++(void);            //pre increment
        Fixed operator++(int);              //post increment
        Fixed & operator--(void);            //pre decrement
        Fixed operator--(int);              //post decrement

        bool operator>(Fixed const & op) const;    
        bool operator<(Fixed const & op) const;    
        bool operator>=(Fixed const & op) const;    
        bool operator<=(Fixed const & op) const;    
        bool operator==(Fixed const & op) const;    
        bool operator!=(Fixed const & op) const;


        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        static Fixed &min(Fixed &u, Fixed &v);
        const static Fixed &min(const Fixed &u, const Fixed &v);
        static Fixed &max(Fixed &u, Fixed &v);
        const static Fixed &max(const Fixed &u, const Fixed &v);
};
// =============================================================================

Fixed &min(Fixed &u, Fixed &v);
Fixed &max(Fixed &u, Fixed &v);
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif