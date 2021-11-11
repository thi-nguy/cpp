#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    {
		ClapTrap	claptrap("Sum");

		claptrap.attack("Jhon");
		claptrap.beRepaired(40);
		claptrap.takeDamage(100);
	}
	std::cout << std::endl;
	{
		ScavTrap	scavtrap("Nancy");

		scavtrap.attack("Jhon");
		scavtrap.beRepaired(80);
		scavtrap.guardGate();
		scavtrap.takeDamage(100);
	}

    return (0);
}

// ! add pointer to prove virtual function works