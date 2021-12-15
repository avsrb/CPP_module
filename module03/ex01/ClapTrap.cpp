#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	m_name("RandomChumpClapTrap"),
						m_hitpoints(10),
						m_energyPoints(10),
						m_attackDamage(0)
{}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called, \033[31m" << m_name << "\033[0m vanished! (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& C) :	m_name(C.m_name),
										m_hitpoints(C.m_hitpoints),
										m_energyPoints(C.m_energyPoints),
										m_attackDamage(C.m_attackDamage)
{
	std::cout << "Copy constructor called! (ClapTrap)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C)
{
	if (&C == this)
		return (*this);
	m_name			= C.m_name;
	m_hitpoints		= C.m_hitpoints;
	m_energyPoints	= C.m_energyPoints;
	m_attackDamage	= C.m_attackDamage;
	return (*this);
}

ClapTrap::ClapTrap(const std::string name) : m_name(name),
											m_hitpoints(10),
											m_energyPoints(10),
											m_attackDamage(0)
{
	std::cout	<<	"Constructor with a name called, \033[32m"
				<<	m_name
				<<	"\033[0m created! (ClapTrap)" << std::endl;
}

const std::string &ClapTrap::getMName() const
{
	return m_name;
}

int ClapTrap::getMHitpoints() const
{
	return m_hitpoints;
}

int ClapTrap::getMEnergyPoints() const
{
	return m_energyPoints;
}

int ClapTrap::getMAttackDamage() const
{
	return m_attackDamage;
}


void ClapTrap::attack(const std::string &target)
{
	std::cout	<<	"ClapTrap \033[32m"
				<<	m_name
				<<	"\033[0m attack "
				<<	target
				<< ", causing "
				<<	m_attackDamage
				<<	" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitpoints <= 0)
	{
		std::cout	<< "ClapTrap \033[32m"
					<< m_name
					<< "\033[0m is already dead!"
					<< std::endl;
		return;
	}
	m_hitpoints -= amount;
	if (m_hitpoints <= 0)
	{
		std::cout	<<	"ClapTrap \033[32m"
					<<	m_name
					<<	"\033[0m damage by "
					<<	amount
					<<	" points!"
					<<	"And now he is dead." << std::endl;
	}
	else
	{
		std::cout	<<	"ClapTrap \033[32m"
					<<	m_name
					<<	"\033[0m damaged by "
					<<	amount
					<<	" points! " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hitpoints <= 0)
	{
		std::cout	<<	"ClapTrap \033[32m"
					<<	m_name
					<<	"\033[0m is dead! No repaires done."
					<<	std::endl;
		return;
	}
	std::cout		<<	"ClapTrap \033[32m"
					<<	m_name
					<<	"\033[0m repaired by "
					<<	amount
					<<	" points!"
					<<	std::endl;
	m_hitpoints += amount;
}
