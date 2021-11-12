#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

		c.highFivesGuys();
		c.attack("Cadic");
		c.beRepaired(20);
		c.takeDamage(50);
	}
	std::cout << std::endl;
	{
		DiamondTrap	d("ChiChi");

		d.whoAmI();
		d.attack("Songohan");
		d.guardGate();
		d.highFivesGuys();
		d.beRepaired(200);
		d.takeDamage(0);
	}

    return (0);
}