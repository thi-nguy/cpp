#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Songoku");
    ClapTrap b(a);
    ClapTrap c(a);
    b = c;

    a.attack("Cadic");
    a.takeDamage(10);
    a.beRepaired(10);

    return (0);
}