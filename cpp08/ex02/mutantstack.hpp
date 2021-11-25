#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(void);
        ~MutantStack(void);
        MutantStack(MutantStack const &other);
        MutantStack&    operator=(MutantStack const &rhs);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator    begin(void);
        iterator    end(void);

};

#endif