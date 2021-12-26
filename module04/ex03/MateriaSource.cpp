#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : m_materias()
{
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete m_materias[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &M) : m_materias()
{
	for (int i = 0; i < 4; ++i)
	{
		m_materias[i] = M.m_materias[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &M)
{
	if (this == &M)
		return (*this);
	for (int i = 0; i < 4; ++i)
	{
		delete m_materias[i];
		m_materias[i] = M.m_materias[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *a)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!m_materias[i])
		{
			m_materias[i] = a;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (m_materias[i] && (m_materias[i]->getType() == type))
			return (m_materias[i]->clone());
	}
	return nullptr;
}
