#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	AMateria		*m_materia[4];
	std::string		m_name;

	Character();
	~Character();
	Character(std::string name);
	Character(const Character &C);
	Character& operator=(const Character &C);

	virtual const std::string &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};


#endif
