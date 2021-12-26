#include "Character.hpp"

Character::Character() :	m_name("HZ"),
							m_materia()
{
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete m_materia[i];
	}
}

Character::Character(const Character &C):	m_name(C.m_name),
											m_materia()
{
	for (int i = 0; i < 4; ++i)
	{
		m_materia[i] = C.m_materia[i]->clone();
	}
}

Character &Character::operator=(const Character &C)
{
	if (this == &C)
		return (*this);
	m_name = C.m_name;
	for (int i = 0; i < 4; ++i)
	{
		delete m_materia[i];
		m_materia[i] = C.m_materia[i]->clone();
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
		if (!m_materia[i])
		{
			m_materia[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	m_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || !m_materia[idx])
		return ;
	m_materia[idx]->use(target);
}

const std::string &Character::getName() const
{
	return m_name;
}
