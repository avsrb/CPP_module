#include "ScavTrap.hpp"

int	main()
{
	std::cout << "________________" << std::endl;
	std::cout << "____ClapTrap____" << std::endl;
	std::cout << "________________" << std::endl;
	ClapTrap	Tom("Tom");

	Tom.attack("Liza");
	Tom.takeDamage(10);
	Tom.beRepaired(15);
	std::cout << "________________" << std::endl;
	ClapTrap	Liza;

	Liza.attack("Tom");
	Liza.takeDamage(20);
	Liza.beRepaired(25);
	std::cout << "________________" << std::endl;
	std::cout << "____ScavTrap____" << std::endl;
	std::cout << "________________" << std::endl;
	ScavTrap	Alex("Alex");

	Alex.attack("Liza");
	Alex.takeDamage(18);
	Alex.beRepaired(40);
	Alex.guardGate();
	std::cout << "________________" << std::endl;
	std::cout << "________________" << std::endl;
	std::cout << "___destructor___" << std::endl;
	std::cout << "________________" << std::endl;
	return (0);
}