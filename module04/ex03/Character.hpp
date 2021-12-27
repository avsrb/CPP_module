#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
private:
	std::string		m_name;
	AMateria		*m_inventory[4];
public:
	Character();
	~Character();
	Character(const Character &C);
	Character& operator=(const Character &C);
	Character(std::string name);
	virtual const std::string &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
