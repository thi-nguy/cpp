#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria*   _memory[4];

    public:
        MateriaSource(void);
        ~MateriaSource(void);
        MateriaSource &operator=(const MateriaSource &rhs);
        MateriaSource(const MateriaSource &other_object);

        void        learnMateria(AMateria* a);
        AMateria*   createMateria(std::string const& type);
};

#endif