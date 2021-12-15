#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :	ClapTrap(100, 50, 30, "Noname_clap"),
								ScavTrap("Noname_scav"),
								FragTrap("Noname_flag"),
								m_name("Noname_diamond")
{
	std::cout << "Default constructor called, Noname created!(DiamondTrap)" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called, \033[31m" << m_name << "\033[0m vanished! (DiamondTrap)" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &D)	:	ClapTrap(	D.m_hitpoints,
															D.m_energyPoints,
															D.m_attackDamage,
															D.m_name),
													ScavTrap(D.m_name),
													FragTrap(D.m_name),
													m_name(D.m_name)
{
	std::cout << "Copy constructor called! (DiamondTrap)" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &D)
{
	if (this == &D)
		return (*this);
	m_name			= D.m_name;
	m_hitpoints		= D.m_hitpoints;
	m_energyPoints	= D.m_energyPoints;
	m_attackDamage	= D.m_attackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name) :	ClapTrap(100, 50, 30, name),
												ScavTrap(name),
												FragTrap(name),
												m_name(name)
{
	std::cout << "Constructor with a name called, \033[32m" << m_name << "\033[0m created! (DiamondTrap)" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ClapTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << m_name << "(DiamondTrap) | " << ClapTrap::m_name << "(ClapTrap)" << std::endl;;
}

