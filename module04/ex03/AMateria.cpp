#include "AMateria.hpp"

AMateria::AMateria() : m_type("Default")
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &AM) : m_type(AM.m_type)
{
}

AMateria& AMateria::operator=(const AMateria &AM)
{
	if (this == &AM)
		return (*this);
	m_type = AM.m_type;
	return (*this);
}

AMateria::AMateria(std::string const & type) : m_type(type)
{
}

std::string const &AMateria::getType() const {
	return m_type;
}
