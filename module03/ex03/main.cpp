#include "DiamondTrap.hpp"

int	main()
{

		ClapTrap Tom("Tom");
		ScavTrap Liza("Liza");
		FragTrap Max("Max");
		DiamondTrap Denis("Denis");

		Liza.guardGate();
		Liza.attack(Tom.getMName());
		Tom.takeDamage(Liza.getMAttackDamage());
		Tom.beRepaired(Tom.getMEnergyPoints());
		Max.highFivesGuys();
		Denis.highFivesGuys();
		Denis.attack(Max.getMName());
		Max.takeDamage(Denis.getMAttackDamage());
		Denis.attack(Liza.getMName());
		Liza.takeDamage(Denis.getMAttackDamage());
		Denis.beRepaired(Denis.getMEnergyPoints());
		Denis.whoAmI();
	return (0);
}