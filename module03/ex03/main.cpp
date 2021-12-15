#include "DiamondTrap.hpp"

int	main()
{

		ClapTrap A("first");
		ScavTrap B("second");
		FragTrap C("third");
		DiamondTrap D("fourth");

		B.guardGate();
		B.attack(A.getMName());
		A.takeDamage(B.getMAttackDamage());
		A.beRepaired(A.getMEnergyPoints());
		C.highFivesGuys();
		D.highFivesGuys();
		D.attack(C.getMName());
		C.takeDamage(D.getMAttackDamage());
		D.attack(B.getMName());
		B.takeDamage(D.getMAttackDamage());
		D.beRepaired(D.getMEnergyPoints());
		D.whoAmI();
	return (0);
}