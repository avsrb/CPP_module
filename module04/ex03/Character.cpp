#include "Character.hpp"

Character::Character() : m_name("HZ"),
						 m_inventory()
{
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete m_inventory[i];
	}
}

Character::Character(const Character &C): m_name(C.m_name),
										  m_inventory()
{
	for (int i = 0; i < 4; ++i)
	{
		m_inventory[i] = C.m_inventory[i]->clone();
	}
}

Character& Character::operator=(const Character &C)
{
	if (this == &C)
		return (*this);
	m_name = C.m_name;
	for (int i = 0; i < 4; ++i)
	{
		delete m_inventory[i];
		m_inventory[i] = C.m_inventory[i]->clone();
	}
	return (*this);
}

Character::Character(std::string name):	m_name(name)
{
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!m_inventory[i])
		{
			m_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	m_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !m_inventory[idx])
		return ;
	m_inventory[idx]->use(target);
}

const std::string &Character::getName() const
{
	return m_name;
}
