#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Tom("Tom");
	ClapTrap	Liza("Liza");
	Tom.attack("Liza");
	Tom.takeDamage(5);
	Tom.beRepaired(10);
	Liza.attack("Tom");
	Liza.takeDamage(42);
	Liza.beRepaired(21);
}