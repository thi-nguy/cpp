#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    {
		ClapTrap	a("Cadic");

		a.attack("Songoku");
		a.beRepaired(40);
		a.takeDamage(100);
	}
	std::cout << std::endl;
	{
		ScavTrap	b("Kirillin");

		b.attack("Pocolo");
		b.beRepaired(80);
		b.takeDamage(100);
		b.guardGate();
	}
    return (0);
}