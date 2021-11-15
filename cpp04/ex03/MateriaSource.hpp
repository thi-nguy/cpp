#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource(void);
        MateriaSource(std::string const &type);
        ~MateriaSource(void);
        MateriaSource &operator=(const MateriaSource &rhs);
        MateriaSource(const MateriaSource &other_object);
};

#endif