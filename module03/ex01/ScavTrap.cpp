#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20)
{
	std::cout << "Default constructor called, RandomChump created! (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called, \033[31m" << m_name << "\033[0m vanished! (ClapTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &S) : ClapTrap(S.m_hitpoints, S.m_energyPoints, S.m_attackDamage, S.m_name)
{
	std::cout << "Copy constructor called! (ScavTrap)" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &S)
{
	if (&S == this)
		return (*this);
	m_name = S.m_name;
	m_hitpoints = S.m_hitpoints;
	m_energyPoints = S.m_energyPoints;
	m_attackDamage = S.m_attackDamage;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20,name)
{
	std::cout	<<	"Constructor with a name called, \033[32m"
				 <<	m_name
				 <<	"\033[0m created! (ClapTrap)" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout	<<	"ScavTrap \033[32m"
				 <<	m_name
				 <<	"\033[0m attack "
				 <<	target
				 << ", causing "
				 <<	m_attackDamage
				 <<	" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout	<<	"ScavTrap \033[32m"
				 <<	m_name
				 <<	"\033[0m have entered the Gate keeper mode!" << std::endl;
}
