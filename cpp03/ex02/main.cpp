#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    {
		ClapTrap	claptrap("Songoku");

		claptrap.attack("Piccolo");
		claptrap.beRepaired(40);
		claptrap.takeDamage(100);
	}
	std::cout << std::endl;
	{
		ScavTrap	scavtrap("Krillin");

		scavtrap.attack("Yamcha");
		scavtrap.beRepaired(80);
		scavtrap.guardGate();
		scavtrap.takeDamage(100);
	}
	std::cout << std::endl;
	{
		FragTrap	fragtrap("Bulma");

		fragtrap.attack("Cadic");
		fragtrap.highFivesGuys();
		fragtrap.takeDamage(50);
		fragtrap.beRepaired(20);
	}

    return (0);
}