#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
	std::string		m_name;
	int				m_hitpoints;
	int				m_energyPoints;
	int				m_attackDamage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap& C);
	ClapTrap& operator=(const ClapTrap& C);
	ClapTrap(const std::string name);

	const std::string	&getMName() const;
	int					getMHitpoints() const;
	int					getMEnergyPoints() const;
	int					getMAttackDamage() const;
	void				attack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
