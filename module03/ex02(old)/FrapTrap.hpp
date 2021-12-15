#ifndef FLAPTRAP_HPP
#define FLAPTRAP_HPP

#include "ScavTrap.hpp"

class FrapTrap : public ClapTrap
{
public:
	FrapTrap();
	~FrapTrap();
	FragTrap(const FragTrap &F);
	FragTrap& operator=(const FragTrap &F);
	FragTrap(std::string sName);
	void highFiveGuys(void);
};


#endif
