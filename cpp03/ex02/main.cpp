#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    {
		ClapTrap	a("Songoku");

		a.attack("Piccolo");
		a.beRepaired(40);
		a.takeDamage(100);
	}
	std::cout << std::endl;
	{
		ScavTrap	b("Krillin");

		b.attack("Yamcha");
		b.guardGate();
		b.beRepaired(80);
		b.takeDamage(100);
	}
	std::cout << std::endl;
	{
		FragTrap	c("Bulma");

		c.attack("Cadic");
		c.highFivesGuys();
		c.beRepaired(20);
		c.takeDamage(50);
	}

    return (0);
}