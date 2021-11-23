#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <iostream>
#include <string>

template <typename T>

class Array
{
    private:
        unsigned int  _size;
        T             *_array;
    
    public:
        class IndexOutOfRangeException: public std::exception
        {
            public:
                virtual char const *what(void) const throw()
                {
                    return ("index out of range");
                }
        };

        Array<T>(void): _size(0) {
            _array = new T[0]();
        }

        Array<T>(unsigned int n): _size(n)
        {
            _array = new T[n]();
        }

        Array<T>(Array<T> const &other)
        {
            _size = other._size;
            _array = new T[_size]();

            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }

        T       &operator=(Array<T> const &rhs)
        {
            if (this != &rhs)
            {
                delete [] _array;
                _array = new T[rhs._size]();
                _size = rhs._size;

                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = rhs._array[i];
            }
            return (*this);
        }

        ~Array<T>(void)
        {
            delete[] _array;
        }

        T const &operator[](unsigned int i) const
        {
            if (i >= _size)
                throw (IndexOutOfRangeException());
            return (_array[i]);
        }

        T &operator[](unsigned int i)
        {
            if (i >= _size)
                throw (IndexOutOfRangeException());
            return (_array[i]);
        }

        unsigned int    size(void) const
        {
            return (_size);
        }

};

template <typename T>
std::ostream	&operator<<(std::ostream &COUT, Array<T> const &arr)
{
	COUT << "{ ";
	for (unsigned int i = 0; i < arr.size(); i++)
	{
		COUT << arr[i];
		if (i < arr.size() - 1)
			COUT << ", ";
	}
	COUT << " }";
	return (COUT);
}

#endif