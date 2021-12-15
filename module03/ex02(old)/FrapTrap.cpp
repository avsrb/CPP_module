#include "FrapTrap.hpp"

FrapTrap::FrapTrap() : ClapTrap(100, 100, 30)
{
	std::cout << "Default constructor called, Noname created!(FragTrap)" << std::endl;
}

FrapTrap::~FrapTrap()
{
	std::cout << "Destructor called, " << m_name << " vanished! (FragTrap)" << std::endl;
}

