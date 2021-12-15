#include "FragTrap.hpp"

FragTrap::FragTrap():	ClapTrap(100, 100, 30)
{
	std::cout << "Default constructor called, Noname created!(FragTrap)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called, " << m_name << " vanished! (FragTrap)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &F) : ClapTrap(F.m_hitpoints, F.m_energyPoints, F.m_attackDamage, F.m_name)
{
	std::cout << "Copy constructor called! (FragTrap)" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &F)
{
	if (this == &F)
		return (*this);
	m_name = F.m_name;
	m_hitpoints = F.m_hitpoints;
	m_energyPoints = F.m_energyPoints;
	m_attackDamage = F.m_attackDamage;
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor with a name called, " << m_name << " created! (FragTrap)" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "Guys HIGH FIVE TIME!" << std::endl;
}
