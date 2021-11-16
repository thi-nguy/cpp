#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
        _memory[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
	{
		if (_memory[i] != NULL)
			delete (_memory[i]);
	}
}

MateriaSource    &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
		{
			if (rhs._memory[i] != NULL)
				_memory[i] = rhs._memory[i]->clone();
			else
				_memory[i] = NULL;
		}
    }
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &other_object)
{
    *this = other_object;
}

void        MateriaSource::learnMateria(AMateria* a)
{
    for (int i = 0; i < 4; i++)
	{
		if (_memory[i] == NULL)
		{
			_memory[i] = a;
			return ;
		}
	}
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
   for (int i = 0; i < 4 ; i++)
	{
		if (_memory[i] != NULL && _memory[i]->getType() == type)
			return (_memory[i]->clone());
	}
	return (NULL);
}