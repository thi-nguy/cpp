#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(void) {}
        ~MutantStack(void) {}
        MutantStack(MutantStack const &other) { *this = other;}
        MutantStack&    operator=(MutantStack const &rhs)
        {
            if (this != &rhs)
            {
            }
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator    begin(void) { return this->c.begin();};
        iterator    end(void) { return this->c.end();};
};

#endif