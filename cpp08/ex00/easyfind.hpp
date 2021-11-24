#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>


class ValueNotFoundException : public std::exception
{
public:
	virtual char const	*what(void) const throw()
	{
		return ("Value not found in container");
	}
};


template <typename T>
typename T::iterator	easyfind(T &ctn, int val)
{
	typename T::iterator	it = std::find(ctn.begin(), ctn.end(), val);
	if (it == ctn.end())
		throw ValueNotFoundException();
	return (it);
}

#endif
