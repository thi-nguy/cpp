#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Songoku");
    ClapTrap b(a);
    ClapTrap c;

    a.attack("Cadic");
    a.takeDamage(10);
    a.beRepaired(10);

    b.attack("Bulma");
    b.takeDamage(100);
    b.beRepaired(100);

    c.attack("Pocolo");
    c.takeDamage(200);
    c.beRepaired(100);

    return (0);
}