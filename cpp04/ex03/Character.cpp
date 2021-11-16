#include "Character.hpp"

Character::Character(void): _name("unknown")
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string const &name): _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::~Character(void)
{	
    for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
            delete (_inventory[i]);
	}
}

Character    &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
    }
    return (*this);
}

Character::Character(const Character &other_object)
{
    *this = other_object;
}

std::string const&      Character::getName(void) const
{
    return (_name);
}

void                    Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return ;
        }
    }
}

void                    Character::unequip(int idx)
{
    if (idx >= 4 || idx < 0)
        return ;
    if (idx == 3)
    {
        _inventory[idx] = NULL;
        return ;
    }
    for (int i = idx; i < 3; i++)
    {
        _inventory[i] = _inventory[i + 1];
        _inventory[i + 1] = NULL;
    }
}

void                    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
        _inventory[idx]->use(target);
}