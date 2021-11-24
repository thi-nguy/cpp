#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>

#define INT32_MAX 2147483647

class Span
{
    private:
        unsigned int        _size;
        std::vector<int>    _intList;
        Span(void);

    public:
        class VectorIsFullException: public std::exception
        {
            public:
                virtual char const  *what() const throw()
                {
                    return ("Vector is full. Cannot add number");
                }
        };

        class RangeExceededException: public std::exception
        {
            public:
                virtual char const *what() const throw()
                {
                    return ("Input range is exceeded the capacity of vector");
                }
        };

        class NoSpanToFind: public std::exception
        {
            public:
                virtual char const *what() const throw()
                {
                    return ("Vector has not enough elements. There is no span to find");
                }
        };

        Span(unsigned int N);
        ~Span(void);
        Span(const Span &other);
        Span&   operator=(const Span   &rhs);
        
        
        void    addNumber(int numb); // ! Add single number
        
        template <typename T>
        void    addNumber(T begin, T end); // ! Add a range of number

        int     shortestSpan(void) const;
        int     longestSpan(void) const;
};

#endif