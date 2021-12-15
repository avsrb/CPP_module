#include "FragTrap.hpp"

int	main()
{
	ClapTrap A("first");
	ScavTrap B("second");
	FragTrap C("third");

	B.guardGate();
	B.attack(A.getMName());
	A.takeDamage(B.getMAttackDamage());
	A.beRepaired(100);
	C.highFiveGuys();
	return (0);
}