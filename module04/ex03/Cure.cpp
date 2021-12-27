#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const Cure &C) : AMateria(C.m_type)
{

}

Cure &Cure::operator=(const Cure &C)
{
	if (this == &C)
		return (*this);
	return (*this);
}

AMateria* Cure::clone() const
{
//	AMateria *clone = new Cure(*this);
//	return clone;
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout	<<	"* heals "		<< target.getName()
				<<	"'s wounds *"	<< std::endl;
}
