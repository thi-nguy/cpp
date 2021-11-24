#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>


template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(void);
        ~MutantStack(void);
        MutantStack(MutantStack const &other);
        MutantStack&    operator=(MutantStack const &rhs);



}







#endif