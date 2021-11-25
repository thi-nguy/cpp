#include "MutantStack.hpp"

 MutantStack::MutantStack(void) {}

 MutantStack::~MutantStack(void) {}

 MutantStack::MutantStack(MutantStack const &other)
 {
     *this = other;
 }
        
MutantStack&    MutantStack::operator=(MutantStack const &rhs)
{
    if (this != &rhs)
    {
    }
    return (*this);
}


iterator    MutantStack::begin(void) //return address of first element
{
    return ()
}

iterator    MutantStack::end(void) //return address of last element
{
    return ()
}
