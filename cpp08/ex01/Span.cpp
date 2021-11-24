#include "Span.hpp"

Span::Span(void)
: _size(0), _intList(0)
{}

Span::Span(unsigned int N)
: _size(N)
{}

Span::~Span(void) {}

Span::Span(const Span &other)
{
    *this = other;
}

Span&   Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        _size = rhs._size;
        _intList = rhs._intList;
    }
    return (*this);
}

void    Span::addNumber(int numb)
{
    if (_intList.size() == _size)
        throw (VectorIsFullException());
    _intList.push_back(numb);
}

int     Span::shortestSpan(void)
{
    if (_size < 2 || _intList.size() < 2)
        throw(NoSpanToFind());
    int min_diff = INT32_MAX;
    std::sort(_intList.begin(), _intList.end());
    for (unsigned int i = 1; i < _intList.size(); i++)
    {
        min_diff = std::min(min_diff, _intList[i] - _intList[i - 1]);
    }
    return (min_diff);
}

int     Span::longestSpan(void) const
{
    if (_size < 2 || _intList.size() < 2)
        throw(NoSpanToFind());
    int max_numb = *std::max_element(_intList.begin(), _intList.end());
    int min_numb = *std::min_element(_intList.begin(), _intList.end());
    return (max_numb - min_numb);
}