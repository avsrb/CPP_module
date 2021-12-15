#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &F);
	FragTrap& operator=(const FragTrap &F);
	FragTrap(std::string name);
	void highFiveGuys(void);
};



#endif
