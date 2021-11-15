#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character: public ICharacter
{
    private:
        AMateria        *_inventory[4];
        std::string     _name;

    public:
        Character(void);
        Character(std::string const &name);
        ~Character(void);
        Character(const Character& other_object);
        Character&  operator=(const Character& rhs);

        std::string const&  getName() const;
        void                equip(AMateria *m);
        void                unequip(int idx);
        void                use(int idx, ICharacter &target);

};


#endif